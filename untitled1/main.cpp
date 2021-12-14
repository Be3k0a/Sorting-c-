#include <iostream>
using namespace std;
class Person {
private:
    string name;
    string surname;
    string size;
    int height;
    int weight;

public:
    const string &getName() const {
        return name;
    }

    const string &getSurname() const {
        return surname;
    }

    const string &getSize() const {
        return size;
    }

    int getHeight() const {
        return height;
    }

    int getWeight() const {
        return weight;
    }

public:
    ~Person(){
    }

    Person(const string &name, const string &surname, const string &size, int height, int weight) : name(name),
                                                                                                    surname(surname),
                                                                                                    size(size),
                                                                                                    height(height),
                                                                                                    weight(weight) {}
    Person() {
    }

    void Enter(){
        cout<<"Имя: "; cin>>name;
        cout<<"Фамилия: "; cin>>surname;
        cout<<"Размер: "; cin>>size;
        cout<<"Рост: "; cin>>height;
        cout<<"Вес: "; cin>>weight;
    }
    void GetDate(){
        cout<<"Имя :"<<name<<" Фамилия:"<<surname<<" Размер:"<<size<<" Рост: "<<height<<" Вес: "<<weight<<endl;
    }
};
using namespace std;
int main() {
    int c,n,s,key;
    clock_t start,start4,start5,start6,start8,start9,start10,start11;
    clock_t start1,start2,start3,start7;
    Person temp;
    string choice,choice1;
    bool rs = true;
    double duration;
    cout<<"Сколько человека хочешь добавить"<<endl;
    cin>>s;
    Person person[5+s];
    person[0] = Person("Erasyl","Kabulbekov","XL",185,75);
    person[1] = Person("Azamat","Seitzhanuly","XXL",192,95);
    person[2] = Person("Xamit","Kotibaruly","L",182,65);
    person[3] = Person("Serega","Abayev","M",165,65);
    person[4] = Person("Islam","Nurbayev","XL",175,65);
    n = sizeof (person)/sizeof (person[0]);
    for (int i=5;i<n;i++){
        person[i].Enter();
    }
    for (int i=0; i < n ;i++){
        person[i].GetDate();
    }

    while (rs){
        cout<<"Выберите вид сортировки"<<endl;
        cout<<"Нажмите [1] для пузырьковой сортировки: "<<endl;
        cout<<"Нажмите [2] для сортировки вставками: "<<endl;
        cout<<"Нажмите [3] для сортировки выбора: "<<endl;
        cin>>choice;
        if (choice=="1"){
            cout<<" Сортировка класса по методу пузырьковой сортировки "<<endl;
            cout<<" Сортировка по росту   [1]"<<endl;
            cout<<" Сортировка по весу    [2]"<<endl;
            cout<<" Cортировка по имени   [3]"<<endl;
            cout<<" Сортировка по фамилию [4]"<<endl;
            cout<<" Выбор :";
            cin>>choice1;
            if (choice1=="1"){
                start = clock();
                for (int i=1;i<n;i++){
                    for (int r=0; r<n-i;r++){
                        if(person[r].getHeight()<person[r+1].getHeight()){
                            temp = person[r];
                            person[r] = person[r+1];
                            person[r+1] = temp;
                        }
                    }
                }
                for (int i=0;i<n;i++){
                    person[i].GetDate();
                }
                duration = (double) (clock()-start);
                cout<<" Время на сортировку: "<<duration<<endl;
            } else if (choice1=="2"){
                start1 = clock();
                for (int i=1;i<n;i++){
                    for (int r=0; r<n-i;r++){
                        if(person[r].getWeight()<person[r+1].getWeight()){
                            temp = person[r];
                            person[r] = person[r+1];
                            person[r+1] = temp;
                        }
                    }
                }
                for (int i=0;i<n;i++){
                    person[i].GetDate();
                }
                duration = (double) (clock()-start1);
                cout<<" Время на сортировку: "<<duration<<endl;
            } else if(choice1=="3"){
                start2 = clock();
                for (int i=1;i<n;i++){
                    for (int r=0; r<n-i;r++){
                        if(person[r].getName()<person[r+1].getName()){
                            temp = person[r];
                            person[r] = person[r+1];
                            person[r+1] = temp;
                        }
                    }
                }
                for (int i=0;i<n;i++){
                    person[i].GetDate();
                }
                duration = (double) (clock()-start2);
                cout<<" Время на сортировку: "<<duration<<endl;
            } else if (choice1=="4"){
                start3 = clock();
                for (int i=1;i<n;i++){
                    for (int r=0; r<n-i;r++){
                        if(person[r].getSurname()<person[r+1].getSurname()){
                            temp = person[r];
                            person[r] = person[r+1];
                            person[r+1] = temp;
                        }
                    }
                }
                for (int i=0;i<n;i++){
                    person[i].GetDate();
                }
                duration = (double) (clock()-start3);
                cout<<" Время на сортировку: "<<duration<<endl;
            }
        } else if (choice=="2"){
            cout<<" Сортировка класса по методу сортировки вставками: "<<endl;
            cout<<" Сортировка по росту   [1]"<<endl;
            cout<<" Сортировка по весу    [2]"<<endl;
            cout<<" Cортировка по имени   [3]"<<endl;
            cout<<" Сортировка по фамилию [4]"<<endl;
            cout<<" Выбор :";
            cin>>choice1;
            if (choice1 == "1") {
                start8 = clock();
                for (int i=0;i<n-1;i++){
                    key = i+1;
                    temp = person[key];
                    for (int j = i+1;j>0;j--){
                        if (temp.getHeight()<person[j-1].getHeight()){
                            person[j] = person[j-1];
                            key = j-1;
                        }
                    }
                    person[key] = temp;
                }
                for (int i=0;i<n;i++){
                    person[i].GetDate();
                }
                duration = (double) (clock()-start8);
                cout<<" Время на сортировку: "<<duration<<endl;
            } else if (choice1=="2"){
                start9 = clock();
                for (int i=0;i<n-1;i++){
                    key = i+1;
                    temp = person[key];
                    for (int j = i+1;j>0;j--){
                        if (temp.getWeight()<person[j-1].getWeight()){
                            person[j] = person[j-1];
                            key = j-1;
                        }
                    }
                    person[key] = temp;
                }
                for (int i=0;i<n;i++){
                    person[i].GetDate();
                }
                duration = (double) (clock()-start9);
                cout<<" Время на сортировку: "<<duration<<endl;
            } else if (choice1=="3"){
                start10 = clock();
                for (int i=0;i<n-1;i++){
                    key = i+1;
                    temp = person[key];
                    for (int j = i+1;j>0;j--){
                        if (temp.getName()<person[j-1].getName()){
                            person[j] = person[j-1];
                            key = j-1;
                        }
                    }
                    person[key] = temp;
                }
                for (int i=0;i<n;i++){
                    person[i].GetDate();
                }
                duration = (double) (clock()-start10);
                cout<<" Время на сортировку: "<<duration<<endl;
            } else if (choice1=="4"){
                start11 = clock();
                for (int i=0;i<n-1;i++){
                    key = i+1;
                    temp = person[key];
                    for (int j = i+1;j>0;j--){
                        if (temp.getSurname()<person[j-1].getSurname()){
                            person[j] = person[j-1];
                            key = j-1;
                        }
                    }
                    person[key] = temp;
                }
                for (int i=0;i<n;i++){
                    person[i].GetDate();
                }
                duration = (double) (clock()-start11);
                cout<<" Время на сортировку: "<<duration<<endl;
            }
        } else if (choice=="3"){
            cout<<" Сортировка класса по методу сортировки выбора: "<<endl;
            cout<<" Сортировка по росту   [1]"<<endl;
            cout<<" Сортировка по весу    [2]"<<endl;
            cout<<" Cортировка по имени   [3]"<<endl;
            cout<<" Сортировка по фамилию [4]"<<endl;
            cout<<" Выбор: ";
            cin>>choice1;
            if (choice1=="1"){
                start4 = clock();
                for (int startIndex = 0; startIndex < n - 1; ++startIndex)
                {
                    int smallestIndex = startIndex;
                    for (int currentIndex = startIndex + 1; currentIndex < n; ++currentIndex)
                    {
                        if (person[currentIndex].getHeight() < person[smallestIndex].getHeight()){
                            smallestIndex = currentIndex;
                        }
                    }
                    std::swap(person[startIndex], person[smallestIndex]);
                }
                for (int index = 0; index < n; ++index){
                    person[index].GetDate();
                }
                duration = (double) (clock()-start4);
                cout<<" Время на сортировку: "<<duration<<endl;
            } else if (choice1=="2"){
                start5 = clock();
                for (int startIndex = 0; startIndex < n - 1; ++startIndex)
                {
                    int smallestIndex = startIndex;
                    for (int currentIndex = startIndex + 1; currentIndex < n; ++currentIndex)
                    {
                        if (person[currentIndex].getWeight() < person[smallestIndex].getWeight()){
                            smallestIndex = currentIndex;
                        }
                    }
                    std::swap(person[startIndex], person[smallestIndex]);
                }
                for (int index = 0; index < n; ++index){
                    person[index].GetDate();
                }
                duration = (double) (clock()-start5);
                cout<<" Время на сортировку: "<<duration<<endl;
            } else if (choice1=="3"){
                start6 = clock();
                for (int startIndex = 0; startIndex < n - 1; ++startIndex)
                {
                    int smallestIndex = startIndex;
                    for (int currentIndex = startIndex + 1; currentIndex < n; ++currentIndex)
                    {
                        if (person[currentIndex].getName() < person[smallestIndex].getName()){
                            smallestIndex = currentIndex;
                        }
                    }
                    std::swap(person[startIndex], person[smallestIndex]);
                }
                for (int index = 0; index < n; ++index){
                    person[index].GetDate();
                }
                duration = (double) (clock()-start6);
                cout<<" Время на сортировку: "<<duration<<endl;
            } else if (choice1=="4"){
                start7 = clock();
                for (int startIndex = 0; startIndex < n - 1; ++startIndex)
                {
                    int smallestIndex = startIndex;
                    for (int currentIndex = startIndex + 1; currentIndex < n; ++currentIndex)
                    {
                        if (person[currentIndex].getSurname() < person[smallestIndex].getSurname()){
                            smallestIndex = currentIndex;
                        }
                    }
                    std::swap(person[startIndex], person[smallestIndex]);
                }
                for (int index = 0; index < n; ++index){
                    person[index].GetDate();
                }
                duration = (double) (clock()-start7);
                cout<<" Время на сортировку: "<<duration<<endl;
            }
        } else if (choice == "4"){
            rs = false;
        }
    }
}
