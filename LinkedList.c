#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
int data;
struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void insert(int data){

struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = head;
   head = link;
}

bool isEmpty() {
   return head == NULL;
}

int size() {
   int size = 0;
   struct node *current;

   for(current = head; current != NULL; current = current->next) {
      size++;
   }

   return size;
}

struct node* find(int data) {

   struct node* current = head;
   if(head == NULL) {
      return NULL;
   }

   while(current->data != data) {

      if(current->next == NULL) {
         return NULL;
      } else {
         current = current->next;
      }
   }
   return current;
}

struct node* delete(int data){

   struct node* current = head;
   struct node* previous = NULL;

   if(head == NULL) {
      return NULL;
   }
   while(current->data != data) {

      if(current->next == NULL) {
         return NULL;
      } else {
         previous = current;
         current = current->next;
      }
   }

   if(current == head) {
      head = head->next;
   } else {
      previous->next = current->next;
   }
   return current;
}
