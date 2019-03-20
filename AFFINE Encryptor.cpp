#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no,A,B;
    int temp1,temp2;
     int k=97;
     char stalpha[26];
     cout<<"Enter value of coefficient (It must be Coprime with 26) ";
     cin>>A;
     cout<<"Enter value of shift ";
     cin>>B;
    for(int i=0;i<26;i++)
    {
            stalpha[i]=k;
            k++;
    }
    char ch;
    FILE *fp1,*fp2;
    fp1=fopen("text.txt","r+");
    fp2=fopen("file2.txt","w+");
    cout<<"Your file is ready";
while(feof(fp1)==0)
{
    ch=fgetc(fp1);
    if(!feof(fp1))
    {
        for(int i=0;i<26;i++)
        {
         if(ch==stalpha[i])
         {
             no=(A*i+B)%26;
             if(no<10)
                {
                   temp1=no;
                   temp1+=48;
                   fputc(temp1,fp2);
                   fputc(' ',fp2);
                }
                if(no>=10)
                {
                    temp1=no/10;
                    temp2=no%10;
                    temp1+=48;
                    temp2+=48;
                    fputc(temp1,fp2);
                    fputc(temp2,fp2);
                    fputc(' ',fp2);
                }
         }
        }
    }
}
fclose(fp1);
fclose(fp2);
return 0;
}
