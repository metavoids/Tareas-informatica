#pragma once
//utils.h: interface for graph operations
#include <iostream>
typedef unsigned int BOOL;


struct graph_t {
	mat m;
	int NV;  //numero de vértices
};

typedef struct graph_t graph;

/****************
* allocation utilities
*
****************/
namespace A309 {
	typedef unsigned char** mat;
	mat allocate_matrix(int N, int M);
	void free_matrix(mat, int N);
	std::ostream& print_matrix(mat m, int N, int M,std::ostream&);
}


/****************
* Graph management
*
****************/
graph* init_graph(int NV);		//alocate memory for empty graph of size NV
void free_graph(graph* pg);
void print_header(graph* pg);
void print_edges(graph* pg);
int addEdge(graph*, int v, int w);
BOOL isEdge(graph*, int v, int w);
//...
int degree(graph*, int v);
int* degree_all(graph*, int l[]);

int* sort_vertices_min_deg(graph*, int l[]);

/****************
* Graph I/O
*
****************/
graph* read_graph(const char* filename);
//...