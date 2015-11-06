#include <stdio.h>
#include <string.h>
//Minipad 1.0 by CyberError
int main(int argc,char** argv){
if (argc == 1){
return 0;
}else if (argc > 2 && strcmp(argv[1],"--help") != 0 && strcmp(argv[1],"-h") != 0){
FILE *pointer;
pointer = fopen(argv[1],"w");
int i = 2;
int test;
for (i;i < argc;i++){
if (strcmp(argv[i],"--break") == 0){
fprintf(pointer,"\n");
}else{
fprintf(pointer,"%s ",argv[i]);
}
}
fclose(pointer);
}else if(strcmp(argv[1],"-h") == 0 || strcmp(argv[1],"--help") == 0){
printf("Minipad 1.0 by CyberError\nUSAGE: minipad [filename] [contents]\n");
printf("Options\n\t-h --help\t-Displays this text\n\t   --break\t-Inserts a new line in position of --break\n");
//Note filecontents have to be given.
}
return 0;
}
