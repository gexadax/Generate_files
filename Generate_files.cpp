#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <queue>



const string FILE_NAME = "numbers.txt";
const int CHUNK_SIZE = 1000000; // размер фрагмента файла
const int MAX_CHUNKS = 100; // максимальное количество фрагментов
const string TEMP_FILE_PREFIX = "temp_chunk_"; // префикс имени временного файла
const int MAX_NUM = 1000000; // максимальное значение числа