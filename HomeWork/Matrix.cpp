/// Дана челочисленная матрица размера M * N. Найти количество ее столбцов все элементы которых различны
//
//#include <iostream>
//using namespace std;
// 
//int main(){
//    int m, n, count = 0;
//    int stop;
//    cout << "количество строк (m) : ";
//    cin >> m;
//    cout << "номера столбцов (n) : ";
//    cin >> n;
//    
//    int** matr = new int*[m];
//    for(int i = 0; i < m; i++){
//        matr[i] = new int[n];
//    }
//    
//
//    srand(time(NULL));
//    for(int i = 0; i < m; i++){
//        for(int j = 0; j < n; j++){
//            matr[i][j] = rand() % 11;
//            cout << matr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    
//
//    for(int k = 0; k < m; k++){
//        stop = 0;
//        for(int i = 0; i < n - 1 && !stop; i++)
//        for(int j = i + 1; j < n; j++){
//            if(matr[k][i] == matr[k][j]){
//                stop = 1;
//                break;
//            }
//            if(j == n - 1 && i == n - 2){
//                count++;
//                stop = 1;
//                break;
//            }
//        }
//    }
//    
//    cout << "количество уникальных строк : " << count << endl;
//    for(int i = 0; i < m; i++){
//        delete[] matr[i];
//    }
//    delete[] matr;
//    
//    return 0;
//}
