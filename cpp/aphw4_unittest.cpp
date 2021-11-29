#include <limits.h>
#include "aphw4.h"
#include "human.h"
#include "child.h"
#include "adult.h"
#include "gtest/gtest.h"//google test
namespace
{

/*
    TEST(APHW1TEST,Constructors)
    {

        Child Cecelia= Child("Cecelia ","Halpert",3,FEMALE);
        Adult Pam("Pam","Beesly",33,FEMALE);
        Adult Jim("Jim","Halpert",36,MALE);
        Pam.marry(&Jim);
        Cecelia.setParent(&Pam,&Jim);
        EXPECT_EQ(Pam.children[0],&Cecelia);
        EXPECT_EQ(Jim.children[0],&Cecelia);

    }

    TEST(APHW1TEST,babyBorn)
    {
        Child Cecelia= Child("Cecelia ","Halpert",3,FEMALE);
        Adult Pam("Pam","Beesly",33,FEMALE);
        Adult Jim("Jim","Halpert",36,MALE);
        Pam.marry(&Jim);
        Cecelia.setParent(&Pam,&Jim);
        EXPECT_EQ(Pam.last_name,"Halpert");

    }

    TEST(APHW1TEST,publisher)
    {
        Child Cecelia= Child("Cecelia ","Halpert",3,FEMALE);
        Adult Pam("Pam","Halpert",33,FEMALE);
        Adult Jim("Jim","Halpert",36,MALE);
        Pam.marry(&Jim);
        Cecelia.setParent(&Pam,&Jim);
        Child Helen{Jim.babyBorn("Helen",FEMALE)};
        Child Mina{Jim.babyBorn("Mina",FEMALE)};
        Helen.setParent(&Pam,&Jim);
        Mina.setParent(&Pam,&Jim);
        EXPECT_EQ(Jim.children[1]->first_name,"Helen");
    }

    TEST(APHW1TEST,growingUp)
    {
        Child Cecelia= Child("Cecelia ","Halpert",3,FEMALE);
        Adult Pam("Pam","Halpert",33,FEMALE);
        Adult Jim("Jim","Halpert",36,MALE);
        Pam.marry(&Jim);
        Cecelia.setParent(&Pam,&Jim);
        Child Helen{Jim.babyBorn("Helen",FEMALE)};
        Child Mina{Jim.babyBorn("Mina",FEMALE)};
        Helen.setParent(&Pam,&Jim);
        Mina.setParent(&Pam,&Jim);
        Cecelia.growingUp("Teacher");//delete from children of parent
        EXPECT_EQ(Jim.children[0]->first_name,"Helen");
        EXPECT_EQ(Pam.children[1]->first_name,"Mina");

    }

    TEST(APHW1TEST,addFriend)
    {
        Child Cecelia= Child("Cecelia ","Halpert",3,FEMALE);
        Adult Pam("Pam","Halpert",33,FEMALE);
        Adult Jim("Jim","Halpert",36,MALE);
        
        Child Messi= Child("Lionel","Messi",3,MALE);
        Child Ronaldo = Child("Cristiano","Ronaldo",4,MALE);
        Messi.addFriend(Ronaldo);
        Human * h = &Ronaldo;
        EXPECT_EQ(h->getFriends()[0],&Messi);
        h = &Messi;
        EXPECT_EQ(h->getFriends()[0],&Ronaldo);
        
    }

    TEST(APHW1TEST,polymorphism1)
    {
        Child Cecelia= Child("Cecelia ","Halpert",3,FEMALE);
        Adult Pam("Pam","Halpert",33,FEMALE);
        Adult Jim("Jim","Halpert",36,MALE);
        
        Child Messi= Child("Lionel","Messi",3,MALE);
        Child Ronaldo = Child("Cristiano","Ronaldo",4,MALE);
        Messi.addFriend(Ronaldo);
        Cecelia.addFriend(Ronaldo);
        Messi.addFriend(Cecelia);

        auto AdultMessi = Messi.growingUp("Football Player");
        auto AdultCecelia = Cecelia.growingUp("Writer");
        Ronaldo.setGame("FIFA 2017");
        Pam.setJob("Saleswoman");
        Jim.setJob("Salesman");

        std::vector<Human*> humans({&AdultMessi,&Jim,&Pam,&Ronaldo,&Cecelia});
        
    
        EXPECT_EQ(humans[0]->getFriends()[0],&Ronaldo);
        EXPECT_EQ(humans[1]->getFriends()[0],nullptr);
        EXPECT_EQ(humans[3]->getFriends()[0],AdultMessi.childhood);
        
        
    }
    TEST(APHW1TEST,polymorphism2)
    {
        Child Cecelia= Child("Cecelia ","Halpert",3,FEMALE);
        Adult Pam("Pam","Halpert",33,FEMALE);
        Adult Jim("Jim","Halpert",36,MALE);
        
        Child Messi= Child("Lionel","Messi",3,MALE);
        Child Ronaldo = Child("Cristiano","Ronaldo",4,MALE);
        Messi.addFriend(Ronaldo);
        Cecelia.addFriend(Ronaldo);
        Messi.addFriend(Cecelia);

        auto AdultMessi = Messi.growingUp("Football Player");
        auto AdultCecelia = Cecelia.growingUp("Writer");
        Ronaldo.setGame("FIFA 2017");
        Pam.setJob("Saleswoman");
        Jim.setJob("Salesman");
        
        std::vector<Human*> humans({&AdultMessi,&Jim,&Pam,&Ronaldo,&Cecelia});
        
        for(size_t i = 0 ; i < humans.size(); i++)
        {
            std::cout << humans[i]->what_is_she_or_he_doing() << std::endl;
        }
        
    }
*/
}
