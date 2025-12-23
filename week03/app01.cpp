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
    Pokemon(const char* _name, int _level, int _hp) : level(_level), hp(_hp) {
        strcpy(name, _name);
        cout << name << "가(이) 나타났다!" << endl;
    }

    ~Pokemon() {
        cout << name << "는(은) 사라졌다..." << endl;
    }

    void info() const {
        cout << "====== " << name << " ======" << endl;
        cout << "레벨: " << level << endl;
        cout << "HP   : " << hp << endl;
    }

    void attack() const {
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
    Charizard(const char* _name, int _level, int _hp)
        : Pokemon(_name, _level, _hp) {
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
    Pikachu(const char* _name, int _level, int _hp) : Pokemon(_name, _level, _hp) {
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
    Squirtle(const char* _name, int _level, int _hp) : Pokemon(_name, _level, _hp) {
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
    Pikachu   p("피카츄", 10, 35);
    Squirtle  s("꼬부기", 12, 45);

    c.info();
    cout << endl;
    p.info();
    cout << endl;
    s.info();
    cout << endl;

    Pokemon* team[3];
    team[0] = &c;
    team[1] = &p;
    team[2] = &s;

    for (int i = 0; i < 3; ++i) {
        team[i]->attack();
        team[i]->levelUp();
        cout << endl;
    }

    p.pikaVoice();

    cout << endl << "프로그램 종료" << endl;
    return 0;
}
