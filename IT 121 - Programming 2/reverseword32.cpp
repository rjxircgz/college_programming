#include <stdio.h>
#include <string.h>

main()
{
    char str[100];
    char str1[100];
	char str2[100];
    int i,j,k,p,h=0,m=0;
    
	
	
    printf("Enter a phrase:");
    gets(str);


	for(p=strlen(str);p>=0;p--)
	{
		str2[h]=str[p];
		h++;
	}

	 for(i=0;i<=strlen(str);i++)
	{
        if (str2[i]==' '||str2[i]=='\0')
		{
            k = 0;

            for (j = m; j < i; j++)
			{
			//	printf("i value %d\n",i);
                str1[k] = str2[j];
                k++;
            }
            str1[k] = '\0';
            strrev(str1);
            printf("%s ", str1);
            m = i + 1;
        }
    }

	for(p =0; p <= strlen(str);  p++)
	{
		if(str[p] != ' ')
		printf("%c",str[p]);

		else
			break;

		
	}

	printf("\n");




    return 0;
}