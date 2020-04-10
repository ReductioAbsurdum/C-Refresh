#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_table.h"

static ht_item* ht_new_item(const char* k, const char* v) {
  ht_item* i = malloc(sizeof(ht_item));
  i->key = strdup(k);
  i->value = strdup(v);
  return i;
}

ht_hash_table* ht_new() {
    ht_hash_table* ht = malloc(sizeof(ht_hash_table));

    ht->size = 53;
    ht->count = 0;
    ht->items = calloc((unsigned int)ht->size, sizeof(ht_item*));
    return ht;
}

static void ht_del_item(ht_item* i) {
    free(i->key);
    free(i->value);
    free(i);
}

void ht_del_hash_table(ht_hash_table* ht) {
    for (int i = 0; i < ht->size; i++) {
        ht_item* item = ht->items[i];
        if (item != NULL) {
            ht_del_item(item);
        }
    }
    free(ht->items);
    free(ht);
}

void ht_insert(ht_hash_table* ht, char* key, char* value) {
    ht_item* item = ht_new_item(key, value);
    int index = dbj2_hash(item->key);
    ht_item* cur_item = ht->items[index];
    ht->items[index] = item;
    ht->count++;
}

void ht_update(ht_hash_table* ht, char* key, char* value) {
    ht_item* item = ht_new_item(key, value);
    int index = dbj2_hash(item->key);
    ht_item* cur_item = ht->items[index];
    ht->items[index] = item;
    ht->count++;
}

void ht_delete(ht_hash_table* ht, char* key) {
    int index = dbj2_hash(key);
    ht_item* item = ht->items[index];
    ht_del_item(item);
    ht->items[index] = &HT_DELETED_ITEM;
    ht->count--;
}

char* ht_search(ht_hash_table* ht, char* key) {
    int index = dbj2_hash(key);
    ht_item* item = ht->items[index];
    return item->value;
}

int main() {

  ht_hash_table* ht = ht_new();
  ht_del_hash_table(ht);


  return(0);
}
