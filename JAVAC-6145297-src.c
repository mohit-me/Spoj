#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getVersion(char name[]){
int i,j=0,c=0,ja=0;
char tempName[200];
int length = strlen(name);
if(name[0]==95 || name[length-1]==95 || (name[0]<=90 && name[0]>=65)){
   printf("Error!\n");
   return;
}
for(i=0;name[i]!='\0'||i>length;i++){
   if(name[i]==95)c++;
   if(name[i]<=90 && name[i]>=65)ja++;
   if((name[i]==95 && name[i+1]<=90 && name[i+1]>=65)||(name[i+1]==95 && name[i]<=90 && name[i]>=65)){
    printf("Error!\n");
    return;
   }else if(name[i]<=90 && name[i]>=65){
    int t = name[i]+32;
    if(i!=0)tempName[j++]='_';
    tempName[j++]=t;
    tempName[j]='\0';
   }else if(name[i]=='_'){
    if(name[i+1]>=97 && name[i+1]<=122){
     int te = name[i+1];
     if(i!=0)te-=32;
     tempName[j++]=te;
     tempName[j]='\0';
     i++;
    }else{
     printf("Error!\n");
     return;
    }
   }else {
    tempName[j++]=name[i];
    tempName[j]='\0';
   }
}
if(c!=0 && ja!=0)printf("Error!\n");
else printf("%s\n",tempName);
}

int main(){
char name[200];
while(gets(name)){
   getVersion(name);
}
return 0;
}

