// 1. כתוב פונקציה המקבלת מערך של 10 מספרים שלמים, הפונקציה תמיין את המערך בסדר יורד
void f1(int arr1[])
{
    int i,j,temp;
    for(i=0;i<10;i++)
        printf("%d ",arr1[i]);
    printf("\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if(arr1[j]<arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",arr1[i]);
}
