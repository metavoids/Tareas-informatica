#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "utils.h"

int unit_test_allocate_matrix(){
	mat matriz=allocate_matrix(5, 10);
	matriz[0][1]=1;
	//print_matrix(matriz, 5, 10);

	if(matriz==NULL) return -1;
	if(matriz[0][1]!=1) return -1;

	free_matrix(matriz, 5);
	return 0;
}

int unit_test_allocate_graph(){
	graph* pg=init_graph(10);
	if(pg==NULL) return -1;
	

	pg->m[0][1]=1;

	print_header(pg);
	print_edges(pg);

	free_graph(pg);

	return 0;
}


int unit_test_add_edge(){
	graph* pg=init_graph(10);
	if(pg==NULL) return -1;
	
	//test
	addEdge(pg,0,1);
	if(!isEdge(pg,0,1)) return -1; //error	

	free_graph(pg);

	return 0;
}

int unit_test_read_graph(){
	graph* pg=read_graph("brock200_1.clq");

	if(pg==NULL) return -1;
	
	print_header(pg);
	print_edges(pg);

	free_graph(pg);
	return 0;
}


int unit_test_degree_graph(){
	int ld[200], SOL=138;
	graph* pg=read_graph("brock200_1.clq");

	if(pg==NULL) return -1;

	//TEST
	degree_all(pg, ld);
	if(ld[199]!=SOL) return -1;

	free_graph(pg);
	return 0;
}

int unit_test_sort_graph(){
	int ld[200], lv[200], i;
	graph* pg=read_graph("brock200_1.clq");
	if(pg==NULL) return -1;

	//TEST
	degree_all(pg, ld);
	sort_vertices_min_deg(pg, lv);

	//I/O
	for(i=0; i<pg->NV; i++){
		printf("[%d, %d]", lv[i], degree(pg, lv[i]));

	}

	free_graph(pg);
	return 0;
}


//TESTS UNITARIOS
int main(){
	if(unit_test_allocate_matrix()!=0){puts("error en allocate_matrix");}
	if(unit_test_allocate_graph()!=0){puts("error en allocate_graph");}
	if(unit_test_add_edge()!=0){puts("error en unit_test_add_edge");}

	if(unit_test_read_graph()!=0){puts("error en unit_test_read_graph");}
	if(unit_test_degree_graph()!=0){puts("error en unit_test_degree_graph");}
	if(unit_test_sort_graph()!=0){puts("error en unit_test_sort_graph");}


return 0;
}