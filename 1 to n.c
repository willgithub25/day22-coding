#include <stdio.h>
main()
{
    int i,j,n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for(i=1,j=n;i<=n&&j>=1;i++,j--)
    {
        printf("%d %d\n",i,j);
    }


}
