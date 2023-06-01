 #include<iostream>
 #include<unistd.h>
 using namespace std;
 class syncro
 {
public:
    void menu()
    {
        syncro s2;
    cout<<"                         MENU                            \n";
    cout<<"******************************************************\n";
    cout<<"Choose any method from given:\n\n";
    cout<<"1.Peterson's algorithm.\n";
    cout<<"2.Test and set algorithm.\n";
    cout<<"3.Semaphore's algorithm\n";
    cout<<"4.Exit\n";

    s2.selection();

    }
    void selection()
    {   syncro s3;
        syncro p1,p2,p3;
        int op;
        cout<<"\nEnter option number here only:- ";
        cin>>op;
        if(op==1){
        cout<<"\nyour choice is: "<<op<<" peterson's algorithm";
            p1.peter();
        }
        else if(op==2)
        {
        cout<<"\nyour choice is: "<<op<<" test and set algorithm";
        //    p2.test();
        }
        else if(op==3)
        {
        cout<<"\nyour choice is: "<<op<<" semaphore's algorithm";
          //  p3.sema();
        }
        else if(op==4)
        {
            cout<<"\n\nTerning program off!!!\n";


        }
        else
        {
        cout<<"\nplease select correct option!!!";
        s3.selection();
        }

    }
        void peter()
        {
            string p2;
            cout<<"\n\n";
            bool flag[2]={false,false};
            int turn;

                flag[0]=true;
                P0_gate:
                    turn=1;
                    while(flag[1]==true && turn==1)
                    {
                        //wait

                    }
                    //critical section
                        flag[0]=false;

                        flag[1]=true;

                         turn=0;
                         while(flag[0]==false && turn==0)
                         {
                             cout<<"\nprocess 1 in execution...";

                            //busy wait;
                            sleep(3);
                            cout<<" \nwait";
                            sleep(3);
                            break;

                         }


                    //
                        //critical section
        cout<<"\n\nprogram out from peterson's algorithm!!!\n\n";
           process2();
          //selection();


        }
        void process2()
        {
            string p2;

            cout<<"during process 1 execution process 2 arrives with ";
              cin>>p2;
            if(p2==0){
                process2();
            }
            selection();
        }

 };
   int main()
    {
    syncro s1;
    cout<<"******************************************************\n";
    cout<<"          WELCOME TO PROCESS SYNCRONIZATION           \n";
    cout<<"******************************************************\n";
      s1.menu();

      return 0;

    }

