#include <iostream>
#include <cstdlib>  // For system()
#include <ctime>    // For srand()
#include <thread>   // For sleep
#include <chrono>   // For time delay
using namespace std;

void you() {
    cout << "\n-----library of you-----\n";
    cout << "1. vision\n";
    cout << "2. thoughts\n";
    cout << "3. music\n";
    cout << "4. end\n";
    cout << "choose an option: ";
}

void vision(){
    cout << "\n-----visions of you-----\n";
    cout << "1. face\n";
    cout << "2. body\n";
    cout << "3. mind\n";
    cout << "4. actions\n";
    cout << "choose an option: ";
}


void face(){
    cout << "\n";
    cout << ""; // insert how much you admire their face in all its glory
    cout << "\n\npress enter to go back: ";
}

void body(){
    cout << "\n";
    cout << ""; // insert how much you love their body and all its twists and turns
    cout << "\n\npress enter to go back: ";
}

void mind(){
    cout << "\n";
    cout << ""; // insert how much you want to delve into the depths of their mind
    cout << "\n\npress enter to go back: ";
}

void actions(){
    cout << "\n";
    cout << ""; // insert your expression for admiration of their actions
    cout << "\n\npress enter to go back: ";
}

void thoughts(){
    cout << "\n-----thoughts of you-----\n";
    cout << "1. who\n";
    cout << "2. what\n";
    cout << "3. when\n";
    cout << "4. where\n";
    cout << "4. why\n";
    cout << "choose an option: ";
}

void who(){
    cout << "\n";
    cout << ""; // who are they to you?

    cout << "\n\npress enter to go back: ";
}

void what(){
    cout << "\n";
    cout << ""; // what are they to you?

    cout << "\n\npress enter to go back: ";
}

void when(){
    cout << "\n";
    cout << ""; // when do you see what you love?

    cout << "\n\npress enter to go back: ";
}

void where(){
    cout << "\n";
    cout << ""; // where makes your mind race about them?

    cout << "\n\npress enter to go back: ";
}

void why(){
    cout << "\n";
    cout << ""; // why do you love them?

    cout << "\n\npress enter to go back: ";
}

void music() {
    cout << "press enter to get a random song: ";
    cin.ignore();  // wait for enter key
    cin.get();
    
    // List of random song URLs
    string songs[] = {
        "https://www.youtube.com/watch?v=3zMrL6N3GDA", // my heart - paramore
        "https://www.youtube.com/watch?v=1kz6hNDlEEg", // that's what you get - paramore
        "https://www.youtube.com/watch?v=bla0YBsd0DQ", // light - wave to earth
        "https://www.youtube.com/watch?v=Ju8Hr50Ckwk", // if i ain't got you - alicia keys
        "https://www.youtube.com/watch?v=5wmfXve11rM", // 紅豆 - faye wong
        "https://www.youtube.com/watch?v=n8aK_IUna_Y",  // 真的愛你 - beyond
        "https://www.youtube.com/watch?v=HcSE3cQH-Ic", // 追 - leslie cheung
        "https://www.youtube.com/watch?v=0xSiBpUdW4E", // marigold - aimyon
        "https://www.youtube.com/watch?v=Y1AluWkr4YY", // i'll take you everywhere - penfold
        "https://www.youtube.com/watch?v=MQqNsugk3hY", // let love bleed red - sleeping with sirens
        "https://www.youtube.com/watch?v=69RdQFDuYPI", // is this love - bob marley
        "https://www.youtube.com/watch?v=T_lC2O1oIew", // plastic love - mariya takeuchi
        "https://www.youtube.com/watch?v=0Uhh62MUEic", // one last kiss - hikaru utada
        "https://www.youtube.com/watch?v=Aj879fSVbTQ", // parking lot - mineral
        "https://www.youtube.com/watch?v=orZdl3KqgzU", // luv sic pt 2 - nujabes
        "https://www.youtube.com/watch?v=EidBOBOQeg4", // stolen time - per se
        "https://www.youtube.com/watch?v=W-YnyZG8fNU", // corcovado - joao gilberto
        "https://www.youtube.com/watch?v=CYs5-6SWkng", // kokoro ni kumo wo motsu shonen - sunny day service
        "https://www.youtube.com/watch?v=bdOGh2q4184", // osmanthus night - kinoko teikoku
        "https://www.youtube.com/watch?v=D5LwMNLkfJA", // summer night magic - indigo la end
        "https://www.youtube.com/watch?v=VdwAkhNdZi8"  // 因為愛情 - faye wong eason chan
        
        // enter song urls of your choice
    };
    
    // Pick a random song
    int randomIndex = rand() % sizeof(songs);
    string chosenSong = songs[randomIndex];
    
    // Open the link in the default web browser
    #ifdef _WIN32
        system(("start " + chosenSong).c_str()); // Windows
    #elif __APPLE__
        system(("open " + chosenSong).c_str());  // Mac
    #elif __linux__
        system(("xdg-open " + chosenSong).c_str()); // Linux
    #endif
        
    cout << "press enter twice to go back:" << endl; // don't know why i need to press it twice
}

void secret(){
    cout << ""; // secret message?
    
    cout << "press enter to go back:" << endl;
}

int main() {
    int choice = 0;
    
    // Seed random generator
    srand(static_cast<unsigned int>(time(0)));
    
    
    while (true) { // Keep looping until the user chooses to exit
        system("clear"); // Use "cls" on Windows instead
        you();
        cin >> choice;
        
        if (cin.fail()) {
            cin.clear(); // Clear error flag
            cin.ignore(1000, '\n'); // Discard invalid input
            cout << "Invalid input! Please enter a number.\n";
            continue; // Restart loop
        }
        
        // from here on out, you might start doing a lot of nesting if you make it more complex
        
        if (choice == 1) {
            vision();
            cin >> choice;
            
            if (choice == 1){
                face();
            }
            
            if (choice == 2){
                body();
            }
            
            if (choice == 3){
                mind();
            }
            
            if (choice == 4){
                actions();
            }
        }
        
        else if (choice == 2) {
            thoughts();
            cin >> choice;
            
            if (choice == 1){
                who();
            }
            
            if (choice == 2){
                what();
            }
            
            if (choice == 3){
                when();
            }
            
            if (choice == 4){
                where();
            }
            
            if (choice == 5){
                why();
            }
            
        }
        
        else if (choice == 3) {
            music();
        }
        
        
        else if (choice == 4){
            system("clear");
            cout << "\n\ni love you so much\n\n"; // create cute clear message
            cout << "ad astra per aspera\n\n";
            this_thread::sleep_for(chrono::seconds(2));
            system("clear");
            break;

        }
        
        else if (choice == 27){ // this was my secret phase
            secret();
        }
        
        else {
            cout << "\ninvalid choice, please put in a matching number\n";
            cout << "press enter to continue";
        }
        
    cin.ignore(); cin.get(); // Pause before clearing
    }
    
    return 0;
}
