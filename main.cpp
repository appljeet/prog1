#include <iostream>

using namespace std;


//TODO: for each of these functions print cpu time

void RunSkipList(char filename[10]) {

}

void RunQueueAr(char filename[10]) {

}

void RunStackLi(char filename[10]) {

}

void RunStackAr(char filename[10]) {

}

void RunCursorList(char filename[10]) {

}

void RunList(char filename[10]) {

}


int main() {
    char filename[10];
    cin>>filename;
    cout<< "Filename >> " << filename<< endl;
    cout << "\nADT Menu\n"
            "0. Quit\n"
            "1. LinkedList\n"
            "2. CursorList\n"
            "3. StackAr\n"
            "4. StackLi\n"
            "5. QueueAr\n"
            "6. SkipList";

    int choice;
    cin>>choice;
    while (choice!=0){
        cout<<"Your choice >> "<< choice<<endl;

        switch (choice) {
            case 1: RunList(filename); break;
            case 2: RunCursorList(filename); break;
            case 3: RunStackAr(filename); break;
            case 4: RunStackLi(filename); break;
            case 5: RunQueueAr(filename); break;
            case 6: RunSkipList(filename); break;
        }

        cin>>choice;
    }
    cout<<"Your choice >> 0"<<endl;
    cout<<"CPU time: 0"<<endl;
    return 0;
}



