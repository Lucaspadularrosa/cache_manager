#include <iostream>
#include <fstream>
#include <utility>
#include <map>
#include <string>

using namespace std;

template <class T>
class CacheManager
{
  // members ( private )
  int capacity;
  map<string, pair<T, int>> cache_data; // <Clave , <Obj ,Indice de Uso > >
  bool write_file(string, T);
  int MRU = 0;

  // hacer el escribir archivo
  // hacer el insert
  // hacer el get
  // hacer la comparacion

public:
  CacheManager(int); // recibe la capacidad en el int
  ~CacheManager();
  void insert(string key, T obj);
  T get(string key);
  void show_cache();
};

// CACHEMANAGER (STRING CAPACITY)
template <class T>
CacheManager<T>::CacheManager(int cap)
{
  capacity = cap;
}

template <class T>
CacheManager<T>::~CacheManager() {}

template <class T>
bool CacheManager<T>::write_file(string key, T obj)
{

  return true;
}

template <class T>
void CacheManager<T>::show_cache()
{
  for (auto x : cache_data) // Recorre la cache
  {
    x.second.first.print(); // Imprime por consola
  }
}

// INSERT
template <class T>
void CacheManager<T>::insert(string key, T obj)
{
  cache_data.insert(make_pair(key, make_pair(obj, 1)));
}

template <class T>
T CacheManager<T>::get(string key)
{
}
