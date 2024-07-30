//#include<iostream>
//using namespace std;
//typedef struct SinhVien{
//	char HoDem[225];
//	char Ten[225];
//	char NamSinh[4];
//	char DiaChi[225];
//}SinhVien;
//
//void merge(SinhVien sv[],int left,int mid,int right){
//	//tao mang tam thoi chua 2 been mangr trai va phai
//	int n1=mid-left+1;
//	int n2=right-mid;
//	//tao mang tam thoi chua 2 been mangr trai va phai
//	SinhVien L[n1],R[n2];
//	//sao chep vao mang tam thoi
//	for (int i=0;i<n1;i++){
//		L[i]=sv[left+i];
//	}
//	for(int j=0;j<n2;j++){
//		R[j]=sv[mid+1+j];
//	}
//	
//	int i=0,j=0,k=left;
//	while(i<n1&&j<n2){
//		if(strcmp(L[i].HoDem,R[j].HoDem)<0){
//			sv[k]=L[i];
//			i++;
//		}else{
//			sv[k]=R[j];
//			j++;
//		}
//		k++;
//	}
//	//sao chep phan tu con lai neu co
//	while(i<n1){
//		sv[k]=L[i];
//		i++;
//		k++;
//	}
//	while(j<n2){
//		sv[k]=R[j];
//		j++;
//		k++;
//	}	
//}
//void mergeSort(SinhVien arr[],int left, int right){
//	if(left<right){
//		int mid=left+(right-left)/2;
//		mergeSort(arr,left, mid);
//		mergeSort(arr, mid+1,right);
//		merge(arr,left,mid,right);
//	}
//}
//int main(){
//	 SinhVien sv[6] = {
//        {"Nguyen", "Nam", "2003", "Ha Noi"},
//        {"Tran", "Nam", "2003", "Ha Noi"},
//        {"Truong", "Nam", "2003", "Ha Noi"},
//        {"Hoang", "Nam", "2003", "Ha Noi"},
//        // Các phần tử tiếp theo cũng cần được khởi tạo đầy đủ thông tin
//        // Ví dụ:
//        {"Minh", "Nam", "2003", "Ha Noi"},
//        {"Hieu", "Nam", "2003", "Ha Noi"}
//    };
//	mergeSort(sv,0,5);
//	for(int i=0;i<6;i++){
//		cout<<sv[i].HoDem<<" "<<sv[i].Ten<<" ,"<<sv[i].NamSinh<<" ,"<<sv[i].DiaChi<<endl;
//	}
//	
//}
#include <iostream>
#include <cstring> // for strcmp function
using namespace std;

typedef struct SinhVien {
    char HoDem[225];
    char Ten[225];
    char NamSinh[5]; // Increased size to accommodate the null terminator
    char DiaChi[225];
} SinhVien;
void strcpyS(SinhVien &sv1,SinhVien sv2){
	strcpy(sv1.HoDem, sv2.HoDem);
    strcpy(sv1.Ten, sv2.Ten);
    strcpy(sv1.NamSinh, sv2.NamSinh);
    strcpy(sv1.DiaChi, sv2.DiaChi);
}
void merge(SinhVien sv[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    SinhVien L[n1], R[n2];
//tao 2 mang chua 2 ben cua mang
    for (int i = 0; i < n1; i++) {
        strcpyS(L[i],sv[left+i]);
    }
    for (int j = 0; j < n2; j++) {
        strcpyS(R[j],sv[mid+1+j]);
    }
//tron 2 mang lai
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (strcmp(L[i].HoDem, R[j].HoDem) <= 0) {
            strcpyS(sv[k], L[i]);    
            i++;
        } else {
            strcpyS(sv[k], R[j]);
            j++;
        }
        k++;
    }
//sao chep phan con lai
    while (i < n1) {
        strcpyS(sv[k], L[i]);
        i++;
        k++;
    }

    while (j < n2) {
        strcpyS(sv[k], R[j]);
        j++;
        k++;
    }
}

void mergeSort(SinhVien arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
bool check(SinhVien s1, SinhVien s2){
	
	if(strcmp(s1.HoDem,s2.HoDem)!=0) return false;
	if(strcmp(s1.Ten,s2.Ten)!=0) return false;
	if(strcmp(s1.NamSinh,s2.NamSinh)!=0) return false;
	if(strcmp(s1.DiaChi,s2.DiaChi)!=0) return false;
	return true;
}
bool findChia(SinhVien arr[],SinhVien sv,int left, int right){
	if(right>left){
			int mid=left+(right-left)/2;
			if(check(sv,arr[mid])){
				return true;
			}
			else if(strcmp(sv.HoDem,arr[mid].HoDem)>0){
				findChia(arr,sv,mid+1,right);
			}
			else {
				findChia(arr,sv,left,mid-1);
			}
	}
	return false;

		
	
	
}
int main() {
    SinhVien sv[8] = {
        {"Nguyen", "Nam", "2003", "Ha Noi"},
        {"Tran", "Nam", "2003", "Ha Noi"},
        {"Tran", "Nam", "2003", "Ha Noi"},
        {"Tran", "Nam", "2003", "Ha Noi"},
        {"Truong", "Nam", "2003", "Ha Noi"},
        {"Hoang", "Nam", "2003", "Ha Noi"},
        {"Minh", "Nam", "2003", "Ha Noi"},
        {"Hieu", "Nam", "2003", "Ha Noi"}
    };

	
	
    mergeSort(sv, 0, 7);

    cout << "Sorted SinhVien array:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << sv[i].HoDem << " " << sv[i].Ten << " , " << sv[i].NamSinh << " , " << sv[i].DiaChi << endl;
    }
	SinhVien sv1={"Trung", "Nam", "2003", "Ha Noi"};
	if(findChia(sv,sv1,0,7)){
		cout<<"co";
	}else{
		cout<<"khong";
	}
    return 0;
}
