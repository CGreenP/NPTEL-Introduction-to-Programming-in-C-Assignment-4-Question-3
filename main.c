#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str[100], sub[100];

int subString(char str[], int n)
{
  int countsub(char sub[],int l2,char str[],int l1);
    int res,c=(-1);
    for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            for (int k = i; k <= j; k++)
            {
                sub[k]= str[k];
            }
            c++;
            res=countsub(sub,strlen(sub),str,strlen(str));
            if(res==1)
            {
                return (c-1);
            }
          break;
        }
    }
    return c;
}
int countsub(char sub[],int l2,char str[],int l1)
{
    int i,j,k,count = 0, count1 = 0;
    for (i = 0; i < l1;)
    {
        j = 0;
        k=i;
        count = 0;
        while ((str[i] == sub[j])&&(i<l1)&&(j<l2))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;
            count = 0;
            i=k+1;
        }
        else
        {
            i=k+1;
        }
    }
    return count1;

}
void main()
{
  int subString(char str[], int n);
    int n,result,w;
    scanf("%[^\n]s", str);
    n = strlen(str);
    result=subString(str,n);
    if(result==(-1))
    {
        printf("NO");
    }
    if(result>(-1))
    {
        for(w=0;w<=result;w++)
        {
            printf("%c",sub[w]);
        }
    }
}
