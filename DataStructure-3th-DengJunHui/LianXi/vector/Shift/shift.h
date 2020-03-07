//数组循环位移问题,将给定数组向左循环位移k位。
void shift(int *a,int n,int k) //笨比循环,O(k*n)+O(1)
{
    for(int i=0;i<k;i++ )
    {
        int temp=a[0];
        for(int j=0;j<n-1;j++)
            a[j]=a[j+1]; 
        a[n-1]=temp;
    }
}
