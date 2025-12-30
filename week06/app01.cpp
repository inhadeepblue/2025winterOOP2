#pragma warning(disable: 4996)
#include <iostream>
#include <cstring>
using namespace std;

class Pokemon {
protected:
    char name[50];
    int  level;
    int  hp;

public:
    Pokemon(const char* name, int level, int hp) : level(level), hp(hp) {
        strcpy(this->name, name);
        cout << name << "가(이) 나타났다!(부모클래스 생성자）" << endl;
    }
    virtual ~Pokemon() {
        cout << name << "는(은) 사라졌다...(부모클래스 소멸자)" << endl;
    }
    void info() const {
        cout << "====== " << name << " ======" << endl;
        cout << "레벨: " << level << endl;
        cout << "HP   : " << hp << endl;
    }
    virtual void attack() const {
        cout << name << "이(가) 기본 공격 시전!" << endl;
    }
    void levelUp() {
        level++;
        hp += 5;
        cout << name << "이(가) 레벨업! (Lv. " << level << ")" << endl;
    }
};
class Charizard : public Pokemon {
public:
    Charizard(const char* name, int level, int hp)
        : Pokemon(name, level, hp) {
        cout << name << "가(이) 나타났다!(자식클래스 생성자)" << endl;
    }
    ~Charizard() {
        cout << name << "는(은) 사라졌다...(자식클래스 소멸자)" << endl;
    }
    void info() const {
        Pokemon::info();
        cout << "타입 : 불 / 비행" << endl;
    }
    void attack() const {
        cout << name << "이(가) 화염방사!" << endl;
    }
};
class Pikachu : public Pokemon {
public:
    Pikachu(const char* name, int level, int hp) 
        : Pokemon(name, level, hp) {
        cout << name << "가(이) 나타났다!(자식클래스 생성자)" << endl;
    }
    ~Pikachu() {
        cout << name << "는(은) 사라졌다...(자식클래스 소멸자)" << endl;
    }
    void info() const {
        Pokemon::info();
        cout << "타입 : 전기" << endl;
    }
    void attack() const {
        cout << name << "이(가) 10만 볼트!" << endl;
    }
    void pikaVoice() const {
        cout << name << ": 피이~카아~츄우!" << endl;
    }
};
class Squirtle : public Pokemon {
public:
    Squirtle(const char* name, int level, int hp) 
        : Pokemon(name, level, hp) {
        cout << name << "가(이) 나타났다!(자식클래스 생성자)" << endl;
    }
    ~Squirtle() {
        cout << name << "는(은) 사라졌다...(자식클래스 소멸자)" << endl;
    }
    void info() const {
        Pokemon::info();
        cout << "타입 : 물" << endl;
    }
    void attack() const {
        cout << name << "이(가) 물대포!" << endl;
    }
};
int main() {
    Charizard c("리자몽", 15, 60);
    Pikachu   p1("피카츄", 10, 35);
    Squirtle  s("꼬부기", 12, 45);
    Pokemon* p2 = new Pikachu("야생의 피카츄", 20, 100);

    c.info();
    cout << endl;
    p1.info();
    cout << endl;
    s.info();
    cout << endl;
    p2->info();
    cout << endl;    

    Pokemon* team[4];
    team[0] = &c;
    team[1] = &p1;
    team[2] = &s;
    team[3] = p2;

    for (int i = 0; i < 4; ++i) {
        team[i]->attack();
        team[i]->levelUp();
        cout << endl;
    }

    p1.pikaVoice();
    delete p2;
    p2 = nullptr;
    cout << endl << "프로그램 종료" << endl;
    return 0;
}
