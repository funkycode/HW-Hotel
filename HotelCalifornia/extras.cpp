#include "extras.h"


bool BoolQuestion(char* question){
    char answer;
	printf("%s\n", question);
    scanf("%s", &answer);

	switch(answer)
	{
	       case 'y':
                return true;
                break;
           case 'Y':
                return true;
                break;
           case 'n':
                return false;
                break;
           case 'N':
                return false;
                break;
           default:
		        return false;
				break;
	}


}

