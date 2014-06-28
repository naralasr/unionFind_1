#include<stdio.h>
#include<stdlib.h>

//Function to read connections and populate the array Data Structure
int readConnections();
void initArray(int num);
int printConnections();

int *arr  = NULL; //to hold the objects and their connections
char *fileName = "connections.txt";

int main() {
  
  ret = readConnections();

  ret = printConnections();

  fileName=NULL;
  return(ret);
  
}

int readConnections() {
  
  FILE *fp;

  fp = fopen("fileName", "r");
  if (fp == NULL) {
    printf("Failed to open the Connections file: %s\n", filename);
    return(1);
  }

  ret = fscanf(fp, "%d", &numElements):
  if(ret != 0) {
    printf("Failed to read count of elements from file\n");
    return(2);
  }

  initArray(numElements);
  if(ret != 0) {
     printf("Error in function initArray\n");
     return(3);
  }

  

  fclose(fp);


}

void initArray( int num) {
  int i; 
  
  for(i=0; i<num; i++) arr + i = i;
}

int printConnections() {
 
  int *tmp = arr;
  int i;
 
  for(i=0; i< numElemens; i++) {
    printf("%d ", *tmp);
    tmp++;
  }
  
  tmp = NULL;
  return(0);

}
