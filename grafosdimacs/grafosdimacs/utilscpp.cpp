//utils.c: implementation of the interface un utils.h

#include "utilscpp.h"
#include <stdio.h>
#include <stdlib.h>

/****************
* allocation utilities
*
****************/
namespace A309 {
	mat allocate_matrix(int N, int M) {
		mat m = new unsigned char *[N];
		for (int i = 0; i < N; i++) {
			m[i] =new unsigned char [M];
		}
		//checking: if(m==NULL){return NULL;}

		//initialization to empty matrix
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++) {
				m[i][j] = 0;
			}

		return m;
	}
	void free_matrix(mat m, int N) {
		int i;
		for (i = 0; i < N; i++) {
			delete[] m[i];
		}
		delete[] m;
		m = NULL;
	}

	std::ostream& print_matrix(mat m, int N, int M, std::ostream& o) {
		int i, j;
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++) {
				o << static_cast<int>(m[i][j]) << " ";
			}
			o<<std::endl;
		}
		return o;
	}
}

/****************
* Graph management
*
****************/
graph* init_graph(int NV) {
	//alocate memory for empty graph of size NV
	int i, j;
	graph* pg = (graph*)malloc(sizeof(graph));
	//check if(pg==NULL){return NULL;}

	pg->NV = NV;
	pg->m = allocate_matrix(pg->NV, pg->NV);
	//check if(pg->m==NULL){return NULL;}	

	return pg;
}

void free_graph(graph* pg) {
	free_matrix(pg->m, pg->NV);
	free(pg);
	pg = NULL;
}

void print_header(graph* pg) {
	printf("grafo con %d vertices\n", pg->NV);
}

void print_edges(graph* pg) {
	int i, j;
	for (i = 0; i < pg->NV - 1; i++) {
		for (j = i + 1; j < pg->NV; j++) {
			if (pg->m[i][j] == 1) {
				printf("[%d--%d]\n", i, j);
			}
		}
	}
}

int addEdge(graph* pg, int v, int w) {
	if (v >= pg->NV || v < 0) return -1;

	pg->m[v][w] = 1;
	pg->m[w][v] = 1;
	return 0;
}

BOOL isEdge(graph* pg, int v, int w) {
	//check

	return pg->m[v][w];
}

int degree(graph* pg, int v) {
	int deg = 0, i;

	for (i = 0; i < pg->NV; i++) {
		if (pg->m[v][i] == 1) deg++;
	}

	return  deg;
}

int* degree_all(graph* pg, int l[]) {
	int i;
	for (i = 0; i < pg->NV; i++) {
		l[i] = degree(pg, i);
	}

	return l;
}

int* sort_vertices_min_deg(graph* pg, int l[]) {
	/*sorts vertices according to non-decreasing degree */

	int i, j, temp;
	int* degl = (int*)malloc(sizeof(int)*pg->NV);



	//initialize l with vertices 1..N
	for (i = 0; i < pg->NV; i++) {
		l[i] = i;
	}

	//determine sorting criteria
	degree_all(pg, degl);


	//sort
	for (i = 0; i < pg->NV - 1; i++) {
		for (j = i + 1; j < pg->NV; j++) {
			if (degl[l[i]] > degl[l[j]]) {  //criterio
				temp = l[i];
				l[i] = l[j];
				l[j] = temp;
			}
		}
	}

	free(degl);
	return l;
}

/****************
* Graph I/O
*
****************/
graph* read_graph(const char* filename) {
	graph* pg;
	char c, token[50], line[250];
	int v, w, NV, NE, i;
	FILE* fin = fopen(filename, "r");
	if (fin == NULL) {
		perror("error:");
		return NULL;
	}

	////////////
	//read up to 'p'

		//A)char by char
		//c=fgetc(fin);
		//while(c!='p'){
		//	while((c=fgetc(fin))!='\n'){;}
		//	c=fgetc(fin);
		//}

		////parse header
		//fscanf(fin ,"%s%d%d", token, &NV, &NE);
		////if(error)....
		////if(feof(fin))...

		//B)line by line
		//...
	while (1) {
		fgets(line, 250, fin);
		if (line[0] == 'p') break;
		if (feof(fin)) { /*error...return NULL;*/ }
	}

	//parse header
	sscanf(line, "%*s%*s%d%d", &NV, &NE);


	/////////////////	
	//mem alloc graph

	pg = init_graph(NV);
	//check pg!=NULL;

/////////////////
// read edges
	for (i = 0; i < NE; i++) {
		fscanf(fin, "%s%d%d", token, &v, &w);
		addEdge(pg, v - 1, w - 1);
	}

	//////////////

	fclose(fin);
	return pg;
}
