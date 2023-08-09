#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

struct Question {
    string question;
    char correctAnswer;
    string answers[3];
};

Question questions[50];  

void initializeQuestions() {
    questions[0] = {"Jaka jest stolica Polski?", 'B', {"a) Paryż", "b) Warszawa", "c) Gdańsk"}};
    questions[1] = {"Kto napisał dramat Hamlet?", 'A', {"a) Shakespeare", "b) Goethe", "c) Tolstoj"}};
    questions[2] = {"Ile wynosi 2 + 2?", 'C', {"a) 3", "b) 4", "c) 5"}};
    questions[3] = {"Które zwierzę jest symbolizowane przez pandę?", 'A', {"a) Panda", "b) Tygrys", "c) Koala"}};
    questions[4] = {"Który pierwiastek chemiczny oznacza 'Fe'?", 'C', {"a) Fluor", "b) Fosfor", "c) Żelazo"}};
    questions[5] = {"Kto napisał powieść 'Zbrodnia i kara'?", 'A', {"a) Fiodor Dostojewski", "b) Leo Tolstoj", "c) Anton Czechow"}};
    questions[6] = {"Ile jest kontynentów na Ziemi?", 'B', {"a) 4", "b) 7", "c) 5"}};
    questions[7] = {"Który gaz jest najbardziej obecny w atmosferze Ziemi?", 'C', {"a) Azot", "b) Tlen", "c) Azot i Tlen"}};
    questions[8] = {"Kto namalował obraz 'Gwiaździsta noc'?", 'A', {"a) Vincent van Gogh", "b) Leonardo da Vinci", "c) Pablo Picasso"}};
    questions[9] = {"Jak nazywa się największa planeta w Układzie Słonecznym?", 'B', {"a) Mars", "b) Jowisz", "c) Wenus"}};
    questions[10] = {"Który kolor jest położony między niebieskim a żółtym?", 'A', {"a) Zielony", "b) Czerwony", "c) Pomarańczowy"}};
    questions[11] = {"Kto napisał 'Małego Księcia'?", 'B', {"a) Jules Verne", "b) Antoine de Saint-Exupéry", "c) Victor Hugo"}};
    questions[12] = {"Jakie zwierzę to symbol Chin?", 'C', {"a) Lew", "b) Smok", "c) Tygrys"}};
    questions[13] = {"Ile wynosi pierwiastek kwadratowy z 144?", 'A', {"a) 12", "b) 14", "c) 16"}};
    questions[14] = {"Która wojna była zakończona traktatem wersalskim?", 'C', {"a) Wojna stuletnia", "b) Wojna secesyjna", "c) I wojna światowa"}};
    questions[15] = {"Kto był prezydentem USA w 2020 roku?", 'B', {"a) Barack Obama", "b) Donald Trump", "c) Joe Biden"}};
    questions[16] = {"Który kontynent jest nazywany 'Czarnym Kontynentem'?", 'C', {"a) Ameryka Północna", "b) Azja", "c) Afryka"}};
    questions[17] = {"Ile stron ma trójkąt?", 'C', {"a) 2", "b) 3", "c) 3 różne"}};
    questions[18] = {"Który naukowiec jest znany z teorii ogólnej względności?", 'A', {"a) Albert Einstein", "b) Isaac Newton", "c) Galileusz Galilei"}};
    questions[19] = {"Kto jest autorem komedii 'Romeo i Julia'?", 'C', {"a) William Shakespeare", "b) George Orwell", "c) Oscar Wilde"}};
    questions[20] = {"Który metal jest ciekły w temperaturze pokojowej?", 'C', {"a) Złoto", "b) Srebro", "c) Rtęć"}};
    questions[21] = {"Jaki pierwiastek chemiczny oznacza 'O'?", 'A', {"a) Tlen", "b) Wodór", "c) Azot"}};
    questions[22] = {"Który związek chemiczny oznaczany jest jako H2O?", 'B', {"a) Azot", "b) Woda", "c) Dwutlenek węgla"}};
    questions[23] = {"Jak nazywa się proces fotosyntezy?", 'C', {"a) Oddychanie", "b) Fermentacja", "c) Fotosynteza"}};
    questions[24] = {"Który ocean jest największy?", 'C', {"a) Ocean Atlantycki", "b) Ocean Spokojny", "c) Ocean Indyjski"}};
    questions[25] = {"Kto odkrył Amerykę?", 'B', {"a) James Cook", "b) Krzysztof Kolumb", "c) Ferdinand Magellan"}};
    questions[26] = {"Ile wynosi 5 do potęgi 3?", 'A', {"a) 125", "b) 100", "c) 25"}};
    questions[27] = {"Która planeta jest nazywana 'Planetą Czerwoną'?", 'C', {"a) Wenus", "b) Jowisz", "c) Mars"}};
    questions[28] = {"Kto jest autorem 'Opowieści z Narnii'?", 'C', {"a) J.R.R. Tolkien", "b) Roald Dahl", "c) C.S. Lewis"}};
    questions[29] = {"W którym roku miał miejsce pierwszy lot samolotem braci Wright?", 'B', {"a) 1903", "b) 1905", "c) 1910"}};
    questions[30] = {"Jak nazywa się największy kontynent?", 'A', {"a) Azja", "b) Europa", "c) Ameryka Północna"}};
    questions[31] = {"Które zwierzę jest nazywane 'Królem Dżungli'?", 'C', {"a) Słoń", "b) Tygrys", "c) Lew"}};
    questions[32] = {"Kto napisał 'Balladynę'?", 'B', {"a) Adam Mickiewicz", "b) Juliusz Słowacki", "c) Cyprian Kamil Norwid"}};
    questions[33] = {"Jak nazywa się największy księżyc Jowisza?", 'A', {"a) Ganimedes", "b) Kallisto", "c) Io"}};
    questions[34] = {"Który planetoida strąciła dinozaury?", 'B', {"a) Vesta", "b) Chicxulub", "c) Eros"}};
    questions[35] = {"Która litera jest ostatnią w alfabecie łacińskim?", 'A', {"a) Z", "b) Y", "c) X"}};
    questions[36] = {"Ile jest stron w książce z dziesięcioma kartkami?", 'C', {"a) 1", "b) 5", "c) 10"}};
    questions[37] = {"Kto był prezydentem Polski w 2020 roku?", 'B', {"a) Lech Wałęsa", "b) Andrzej Duda", "c) Bronisław Komorowski"}};
    questions[38] = {"Która planeta jest nazywana 'Wieczorną Gwiazdą'?", 'B', {"a) Wenus", "b) Merkury", "c) Mars"}};
    questions[39] = {"Która wojna była zakończona traktatem w Compiègne?", 'A', {"a) I wojna światowa", "b) Wojna w Wietnamie", "c) II wojna światowa"}};
    questions[40] = {"W którym roku miała miejsce Rewolucja Październikowa w Rosji?", 'C', {"a) 1905", "b) 1917", "c) 1919"}};
    questions[41] = {"Kto był autorem 'Opowieści wigilijnej'?", 'B', {"a) Oscar Wilde", "b) Charles Dickens", "c) Mark Twain"}};
    questions[42] = {"Który pierwiastek chemiczny oznacza 'Au'?", 'A', {"a) Złoto", "b) Srebro", "c) Miedź"}};
    questions[43] = {"Który planetoida otrzymała nazwę od bogini miłości?", 'C', {"a) Ceres", "b) Vesta", "c) Eros"}};
    questions[44] = {"Które zwierzę jest nazywane 'Królem zwierząt'?", 'C', {"a) Słoń", "b) Tygrys", "c) Lew"}};
    questions[45] = {"Ile wynosi 10 do potęgi 2?", 'B', {"a) 100", "b) 1024", "c) 1000"}};
    questions[46] = {"Która planeta jest nazywana 'Wodnym Gigantem'?", 'A', {"a) Neptun", "b) Uran", "c) Saturn"}};
    questions[47] = {"Kto był autorem 'Czarodziejskiej Góry'?", 'C', {"a) J.R.R. Tolkien", "b) Roald Dahl", "c) Thomas Mann"}};
    questions[48] = {"W którym roku miała miejsce Bitwa pod Grunwaldem?", 'A', {"a) 1410", "b) 1488", "c) 1565"}};
    questions[49] = {"Która litera jest pierwszą w alfabecie łacińskim?", 'C', {"a) A", "b) B", "c) C"}};


}

void shuffleQuestions() {
    srand(time(NULL));
    for (int i = 0; i < 50; i++) {
        int randomIndex = rand() % 50;
        swap(questions[i], questions[randomIndex]);
    }
}

char getAnswerLetter(int index) {
    return 'A' + index;
}

int main() {
    initializeQuestions();
    shuffleQuestions();

    int score = 0;
    vector<int> wrongAnswers;

    for (int i = 0; i < 10; i++) {
        cout << "Pytanie " << i + 1 << ": " << questions[i].question << endl;

        for (int j = 0; j < 3; j++) {
            cout << questions[i].answers[j] << endl;
        }

        char userAnswer;
        cout << "Podaj literę swojej odpowiedzi: ";
        cin >> userAnswer;

        if (toupper(userAnswer) == questions[i].correctAnswer) {
            cout << "Poprawna odpowiedź!" << endl;
            score++;
        } else {
            cout << "Błędna odpowiedź. Poprawna odpowiedź to: " << questions[i].correctAnswer << endl;
            wrongAnswers.push_back(i);
        }

        cout << endl;
    }

    cout << "Twój wynik: " << score << "/10" << endl;

    if (!wrongAnswers.empty()) {
        cout << "Pytania, na które odpowiedziałeś błędnie:" << endl;
        for (int index : wrongAnswers) {
            cout << "Pytanie: " << questions[index].question << endl;
            cout << "Poprawna odpowiedź: " << questions[index].correctAnswer << endl;
            for (int j = 0; j < 3; j++) {
                cout << questions[index].answers[j] << endl;
            }
            cout << endl;
        }
    }

    return 0;
}
