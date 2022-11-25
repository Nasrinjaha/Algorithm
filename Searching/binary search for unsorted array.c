#include<stdio.h>

int n,arr1[105];
void sort(){
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr1[i]>arr1[j])
            {
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
}

int binary_search(int value){
    int l=0,r=n-1,index=-1,m;
    while(l<=r)
    {
         m=(l+r)/2;
         if(value<arr1[m])
         {
             r=m-1;
         }
         else if(value>arr1[m])
         {
             l=m+1;
         }
         else
         {
             index=m;
             break;
         }

    }
    return index;

}
int main()
{
    int i,j,m,temp;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    sort();
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    int value;
    scanf("%d",&value);
    int index = binary_search(value);
    if(index>=0)
    {
        printf("value found\n");
    }
    else
    {
        printf("value not found\n");
    }
    //printf("%d",count);



}

