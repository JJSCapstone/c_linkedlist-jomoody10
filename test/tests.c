#include "../LinkedList.c"
#include "tests.h"
int main(int argc, char *argv[])
{

    if(argc>1)
    {
        insert(3);
        insert(43);
        insert (12);
        if (strcmp(argv[1], "0")==0){
                return insertTest(5);
        }else if (strcmp(argv[1], "1")==0){
            return emptyTest();
        } else if (strcmp(argv[1],"2")==0){
            return sizeTest();
        } else if (strcmp(argv[1], "3")==0){
            return findTest(43);
        } else if(strcmp(argv[1], "4")==0){
            return deleteTest(12);
        }
    }
}

int insertTest(int data){
insert(data);
if (head->data == data){
    return 0;
}else {return 1;}

}

int emptyTest(){
    if(!isEmpty()){
        return 0;
    }
    else return 1;
}

int sizeTest(){
    if (size()==3){
            return 0;
    }
    else return 1;

}

int findTest(int data){
    if (find(data)!=NULL){
            return 0;
    }
    else return 1;

}

int deleteTest(int data){
    delete(data);
    if (find(data)==NULL){
        return 0;
    }
    else  return 1;
}
