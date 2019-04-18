//utils.h: interface for graph operations

typedef unsigned int BOOL;
typedef BOOL** mat;

struct graph_t{
	mat m; 
	int NV;  //numero de vértices
};

typedef struct graph_t graph;

/****************
* allocation utilities
*
****************/
mat allocate_matrix(int N, int M);
void free_matrix(mat, int N);
void print_matrix(mat m, int N, int M);

/****************
* Graph management
*
****************/
graph* init_graph(int NV);		//alocate memory for empty graph of size NV
void free_graph(graph* pg);
void print_header(graph* pg);
void print_edges(graph* pg);
int addEdge(graph* , int v , int w);
BOOL isEdge(graph* , int v , int w);
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
