//
// Created by Luvxpluto on 10/23/23.
//

#include "Question.h"
///// Define the structures
typedef struct Question Q;
typedef struct Answer A;
typedef struct List List;
typedef struct Node Node;

/// Structure for a singly linked list
struct List {
    Node *start;
};

/// Structure for answers
struct Answer {
    char *code;
    char *detail;
    char *indicator;
};

/// Structure for questions
struct Question {
    char *code;
    char *detail;
    char *difficulty;
    char *category;
    A answer1;
    A answer2;
    A answer3;
};

/// Structure for nodes
struct Node {
    Q question;
    Node *next;
};

/// Function that creates a new list for questions
/* Inputs:
 * None
 * Outputs:
 * The creation of a new (empty) list or NULL if memory allocation fails
 * Constraints:
 * None
 */
List *createNewQuestionList(void)
{
    List *L = (List *)malloc(sizeof(List));
    if (L == NULL) {
        // Handle memory allocation error
        return NULL;
    }
    L->start = NULL;
    return L;
}
