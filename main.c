#include <stdio.h>
#include <stdlib.h>
#include "Phrase.c"

char * create_char_array(int);
void initialize_of_array(char [], int);
void add_phrase(char *, char *, int);
void show_phrase(char [], int);
void show_size_of_char_array(char []);
int get_size_of_literal(char *);
void show_size_of_literal(char *);
void show_integer(int);
void show_character(char);


int main() {
    char * phrase = create_char_array(30);

    char * hello_world_text = "Hello world text";

    * phrase = "Hello, world";

    show_character(hello_world_text);

    show_size_of_literal(hello_world_text);

    add_phrase(phrase, hello_world_text, 30);

    show_phrase(phrase, 30);

    free(phrase);

    return 0;
}

char * create_char_array(int size_of_char_array) {
    char * char_array = malloc(size_of_char_array);
    initialize_of_array(char_array, size_of_char_array);
    return char_array;
}

void initialize_of_array(char char_array [], int size_of_char_array) {
    int size_of_phrase = size_of_char_array;
    int index = 0;
    for (index = 0; index < size_of_phrase; index++) {
        char_array[index] = 0;
    }
}

// Nie działa
void add_phrase(char * destination_char_array, char * source_char_array, int source_char_array_size ) {
    int index = 0;
    for (index = 0; index < source_char_array_size; index++) {
        char source_character = source_char_array[index];
        destination_char_array[index] = source_character;
    }
}

void show_phrase(char char_array[], int size_of_char_array) {
    int size_of_phrase = size_of_char_array;
    int index = 0;
    for (index = 0; index < size_of_phrase; index++) {
        char phrase_character = char_array[index];
        show_character(phrase_character);
    }
}

void show_size_of_char_array(char char_array []) {
    printf("%d\n", sizeof (char_array));
}

int get_size_of_literal(char * literal) {
    int size_of_literal = 0;
    int index_of_literal = 0;
    const int end_of_literal_character_in_ascii = 0;
    int literal_character_in_ascii = 0;

    literal_character_in_ascii = literal[index_of_literal];
    while(literal_character_in_ascii != end_of_literal_character_in_ascii) {
        size_of_literal++;
        index_of_literal++;
        literal_character_in_ascii = literal[index_of_literal];
    }
    return size_of_literal;
}

void show_size_of_literal(char * literal) {
    const int size_of_literal = get_size_of_literal(literal);
    printf("%d\n", size_of_literal);
}

void show_integer(int value) {
    printf("%d", value);
}

void show_character(char value) {
    printf("%c", value);
}


