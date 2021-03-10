
#include "Course.h"
#include <string>
#include <iostream>
// Je n'ai pas réussi à comprendre l'erreur "#include nested too deeply". Du coup je n'ai pas pu tester mon programme.


using namespace std;

    Course (string name){
        course1 = 0;
        course2 = 0;
        course3 = 0;
        course4 = 0;
        course5 = 0;
    };
    Course::Course(){
        pseudoJoueur = 0
        cin << "Quel est votre nom ?" : << endl;
    };


    string Course::getCourse(){
        for(int i=0;i<6;i=i++){
        course[i]= course[i+1]
        //Une fois que la course est terminée, elle laisse sa place à la course suivante.
        return scoreCourse;
        };
    };

    int Course::getMeilleurScore(){
        for(int i=0;i<6;i=i++){
        if(nouveauScore[i]>meilleurScore)
            nouveauScore = meilleurScore[i];
            meilleurScore = ancienScore;
            meilleurScore = i;
        };
        cout << "Le meilleur score de la course est : " <<nouveauScore << endl;
        cout << "Le meilleur score en général est : "<< meilleurScore << endl;
        cout << "Votre ancien score est : "<< ancienScore << endl;
        return nouveauScore;
        return meilleurScore;
    };

    int Course::getMoyenne(){
        for (int i=0;i<5;i++){
            moyenneScore = nouveauScore + meilleurScore + ancienScore;
    };
    moyenne = moyenneScore *(0.2);
    cout << "la moyenne des courses est de :"<<moyenne << endl;
    return moyenne;
    };

    int Course ::getScoreNegatif(){
        for (int i=0;i<6;i++){
            if(nouveauScore[i]<0)
                nouveauScore[i] = scoreNegatif
                //La course actuelle s'annule et recommence car le score est négatif. 
                course[] = course []-(1)
            std::cout << "La Course ne vas pas assez vite et ne fais pas assez de score,nous allons la recommencer! Veuillez nous excuser de ce Contre-temps."<< endl;
            return scoreNegatif;
        };

    };
// Les 4 joueurs rentrent leurs pseudos.
    int Championnat :: getChampionnat();
        pseudoJoueursChamp1 = Joueur1
        cin << "Quel est votre nom ?" : << endl;
    };
    pseudoJoueursChamp2 = Joueur2
        cin << "Quel est votre nom ?" : << endl;
    };
    pseudoJoueursChamp3 = Joueur4
        cin << "Quel est votre nom ?" : << endl;
    };
    pseudoJoueursChamp4 = Joueur4
        cin << "Quel est votre nom ?" : << endl;
    };
// en récupérant le score de chaques joueurs dans la classe Course et en les comparant dans la fonction MeilleurScoreChamp, on peut définir le vainqueur d'une course.
    int getMeilleurScoreChamp();
        meilleurScoreChamp = 0;
//On aditionne tout les scores  de tout les joueurs de toutes les courses et on en fait la moyenne du championnat. 
    int getMoyenneChampo();
        moyenneChamp = 0;