<center>
<h1>
In The Name Of God
</h1>
<h2>
Advanced Programming - Homework 3
</h2>
<h2>
Dr.Amir Jahanshahi
</h2>
<h3>
Deadline: Sunday,  Azar 14 - 23:59
</center>

# Inheritance and Polymorphism
In this homework we want to see simple inheritance and polymorphism example in c++ programming .At first, suppose we have Human class as parent class. Then we create two classes (`Adult `and` Child`) inheritted from `Human` class.

## Human
```c++ 
class Human
{
public:
    std::string first_name;
    std::string last_name;
    int age;
    Gender gender;
    Adult* mother;
    Adult* father;


    Human();
    Human(std::string _first_name,
            std::string _last_name,
                int _age,
                    Gender _gender);
    Human(const Human&&);

    void setParent(Adult* mother,Adult* father);
    Adult* getMother()const{return mother;}
    Adult* getFather()const{return father;}


    virtual const Human& superviser();
    virtual const Child** getFriends();
    virtual std::string what_is_she_or_he_doing();

};
```
A Human object create by first name , last name , age , and Gender enum.
```c++
enum Gender{
    MALE,
    FEMALE
}
```
### Question 1:
In human class we have some virtual methods in your report please describe what do `virtual` and `override` mean?

# Child
```c++
class Child : public Human
{
private:
    Child** friends;
    std::string game;
    Adult* adulthood;
    int number_of_friends = 0;
public:

    Child(std::string,std::string,int,Gender);
    Child(const Child&&);

    Adult growingUp(std::string);
    void addFriend(Child & child);
    private:
        const Child** getFriends();
        std::string what_is_she_or_he_doing();//print game
        const Human& superviser();

};
```
### 1:growingUp
`growingUp` convert `Child` object to `Adult` object and set all the member of `Adult` class.
### 2:addFriend
`addFriend` get a child object and add to `friends` list.

# Adult
```c++
class Adult : public Human
{
public:
    bool married = false;
    bool isMother = false;
    bool isFather = false;
    Adult* spouse;
    Child** children;
    Child* childhood = nullptr;
    int number_of_children = 0;
    std::string job;
    using Human::Human;

    void marry(Adult*);
    Child babyBorn(std::string fn,Gender gender);
    
    
    private:
        const Human& superviser();
        std::string what_is_she_or_he_doing();//print job
        const Child** getFriends();
};
```
### Question 2:
Search about `using` keyword in `Adult` class and describe what does it mean?
### marry:
get an adult object and marry with an adult object and set all members and attributes.

### babyBorn:
This function get first name and gender of new child and return new child and set all member of new child and adult children.


# Virtual Functions
## supervisor:
If an `Adult` object call this function it must return itself.
If a `Child` object call this function it must return her/his father.

## getFriends:
If an `Adult` object call this function it must return her/his childhood friends
If a `Child` object call this function it must return  his/her friends.

## what_is_she_or_he_doing():
If an `Adult` object call this function it must return her/his job and print on cosole like below : 
```
[Job] : ${HIS/HER_JOB}
```
If a `Child` object call this function it must return his/her game and print on console like below : 
```
[Game] : ${HIS/HER_GAME}
```




