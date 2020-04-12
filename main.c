#include <stdio.h>
#include <stdlib.h>
char *add="picture.bmp"; 
int main(){
  char ch;
  char num[64];
  FILE *fp;
  fp=fopen(add,"r");
  for(int loop=1;loop<=64;loop++){
    fread(&ch,sizeof(ch),1,fp);
    num[loop-1]=ch;
  }
  fclose(fp);
  int width=(num[21]*16*16*16*16*16*16)+(num[20]*16*16*16*16))+(num[19]*16*16)+num[18];
  int heigh=(num[25]*16*16*16*16*16*16)+(num[24]*16*16*16*16))+(num[23]*16*16)+num[22];
  int pixels=width*heigh;
  printf("widtht=\t0X%X\n",width);
  printf("height=\t0X%X\n",height);
  printf("pixels=\t0X%X\n",pixels);
  return (0);
}
