#include <string.h>
#include <stdio.h>
#include <ctype.h> //����isalpha���


int main()
{
    int num = 0;
    char input[1000] = {};

    //scanfŪ��Ů�Y�����A�]���ϥ�gets�Agets�OŪ��{ENTER}����

    while(gets(input) != NULL) //�]��input�i�ण�u�@��A�]��gets()�bwhile()�̭��A�i�H����Ū��J��
    {
       for(int i=0; i<strlen(input); i++) //strlen�AŪ��input������
        {
            if(isalpha(input[i]) && !isalpha(input[i+1]))
            {
                num++;
            }
        }
        printf("%d\n", num);

        num = 0;
    }

    return 0;
}
