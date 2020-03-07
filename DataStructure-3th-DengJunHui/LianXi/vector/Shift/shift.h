//数组循环位移问题,将给定数组向左循环位移k位。k非负，要求就地算法。
#include<cmath>
void shift0(int *a,int n,int k) //笨比循环,O(k*n)+O(1)
{
    k=k%n;                         //有可能k大于n，当k=n时，相当于没移动,所以当k>n时，移动k位相当于移动k%n位。加了这句。时间复杂度变为O(n*n)
    for(int i=0;i<k;i++ )
    {
        int temp=a[0];
        for(int j=0;j<n-1;j++)
            a[j]=a[j+1]; 
        a[n-1]=temp;
    }
}
void shift1(int *a,int n,int k) //改进的笨比循环,O(n)+O(k)
{
    k=k%n;
    int * temp=new int[k];
    for(int i=0;i<k;i++)
        temp[i]=a[i];
    for(int i=0;i<n-k;i++)
        a[i]=a[i+k];
    for(int i=n-k;i<n;i++)
        a[i]=temp[i-(n-k)];
}
//倒置版，挖掘特点,0~k-1子数组和k~n-1子数组顺序不变，移动后相当于交换两个子数组的位置
//例如左移4位,1234abcd 变为abcd1234.可以这样，逆序1234，逆序abcd变为4321dcab,然后整个逆序。
void reverse(int *a,int lo,int hi)//[lo,hi)
{
    while(lo<hi)
    {
        int temp=a[lo];
        a[lo++]=a[--hi];
        a[hi]=temp;
    }
}
void shift2(int *a,int n,int k) //O(n)+O(1)
{
    k=k%n;
    reverse(a,0,k);
    reverse(a,k,n);
    reverse(a,0,n);
}
// void shift4(int *a ,int n,int k)//迭代版尝试一：放弃，看不懂
// {
//     for(int i=0;i<k;i++)
//     {
//         int temp=a[i];
//         int j=i;
//         for( ;j<n-k;j+=k)
//             a[j]=a[j+k];
//         a[j]=temp;
//     }
// }
void shift3(int *a,int n,int k)  //模仿邓俊辉那个教案，看不懂，放弃，以后有时间再说吧。
{
    int cnt=0;
    for(int i=0;i<k;i++) 
    {
        int temp=a[i];
        int j=i;
        while(j=(j+k)%n)
        {
            if((j+k)%n==i) break;
            a[j]=a[(j+k)%n]; cnt++;
        }
        a[j]=temp;
        // if(cnt>=n) break;
    }
}
void swap(int *a,int i,int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void shuffle(int *a,int n) //补充一个数组随机置乱算法
{
    while(n>0)
        swap(a,a[rand()%n],a[--n]);
}
