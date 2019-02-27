#include "gameboard.h"

GameBoard::GameBoard(std::shared_ptr<QGraphicsScene> scene)
{
    scene_ = scene;
}

void GameBoard::initalization()
{

    std::pair<std::string, std::string> pawn_facts;
    std::string color = "black";

    for ( int x = 1; x <= 8; x++ ) {

        for ( int y = 1; y <= 8; y++ ) {

            if ( checkIfEven(x, y) ) {
                color = "black";

            } else {
                color = "white";

            }

            std::pair<int, int> pair = std::make_pair(x, y);
            std::shared_ptr<Square> square = std::make_shared<Square> (scene_, color, x, y);
            square->drawSquare();

            pawn_facts = checkPawn(x, y);
            if (pawn_facts.first != "nope") {
                std::shared_ptr<Play_pawns> new_pawn;
                if (pawn_facts.first == "soldier" ) {
                    new_pawn = std::make_shared<Pawn>(scene_, pawn_facts.second);
                } else if (pawn_facts.first == "rook") {
                    new_pawn = std::make_shared<rook>(scene_, pawn_facts.second);
                } else if (pawn_facts.first == "horse") {
                    new_pawn = std::make_shared<knight>(scene_, pawn_facts.second);
                } else if (pawn_facts.first == "bishop") {
                    new_pawn = std::make_shared<bishop>(scene_, pawn_facts.second);
                } else if (pawn_facts.first == "queen") {
                    new_pawn = std::make_shared<queen>(scene_, pawn_facts.second);
                } else if (pawn_facts.first == "king") {
                    new_pawn = std::make_shared<king>(scene_, pawn_facts.second);
                }

                square->addPawn(new_pawn);
            }

            squares_.insert( {pair, square} );

        }
    }
}

bool GameBoard::checkIfEven(int one, int two)
{
    int sum = one + two;

    int reminder = sum % 2;

    if (reminder == 0) {

        return true;

    } else {

        return false;

    }
}

std::pair<std::string, std::string> GameBoard::checkPawn(int x, int y)
{
    if (y > 2 and y < 7) {
        return std::make_pair("nope", "nope");
    } else {
        if ( y == 1) {
            if ( x == 1 or x == 8 ) {
                return std::make_pair("rook", "black");
            } else if( x == 2 or x == 7 ) {
                return std::make_pair("horse", "black");
            } else if ( x == 3 or x == 6 ) {
                return std::make_pair("bishop", "black");
            } else if ( x == 4) {
                return std::make_pair("queen", "black");
            } else if ( x == 5 ) {
                return std::make_pair("king", "black");
            }
        }
        else if ( y == 2 ) {
            return std::make_pair("soldier", "black");
        }
        else if ( y == 7) {
            return std::make_pair("soldier", "white");
        }
        else if ( y == 8 ) {
            if ( x == 1 or x == 8 ) {
                return std::make_pair("rook", "white");
            } else if( x == 2 or x == 7 ) {
                return std::make_pair("horse", "white");
            } else if ( x == 3 or x == 6 ) {
                return std::make_pair("bishop", "white");
            } else if ( x == 4) {
                return std::make_pair("queen", "white");
            } else if ( x == 5 ) {
                return std::make_pair("king", "white");
            }
        }
    }
    throw "Error: Something wrong";
}

