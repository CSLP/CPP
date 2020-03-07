//数组循环位移问题,将给定数组向左循环位移k位。
void shift(int *a,int n,int k) //笨比循环
{
    for(int i=0;i<k;i++ )
    {
        int temp=0;
        for(int i=0;i<n-1;i++)
        {
            temp=a[0];
            a[i]=a[i+1]; 
        }
        a[n-1]=temp;
    }
}
