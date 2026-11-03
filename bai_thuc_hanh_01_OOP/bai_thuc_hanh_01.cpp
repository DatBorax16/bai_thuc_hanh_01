#include <iostream>
#include <string>
using namespace std;
class phuongTien {
	private: 
		int maXe;
		string loaiXe;
		int gioVao;
		int thoiGianDo;
		double phiDoXe;
		bool dangChiemCho;

	public:
		phuongTien() {
			maXe = 0;
			loaiXe = "Null";
			gioVao = 0;
			thoiGianDo = 0;
			phiDoXe = 0;
			dangChiemCho = false;
		}
		phuongTien(int ma, string loai, int gio, int tg) {
			maXe = ma;
			loaiXe = loai;
			gioVao = gio;
			thoiGianDo = tg;
		}
		int layMaXe() const {
			return maXe;
		}
		string layLoaiXe() const{
			return loaiXe;
		}
		int layGioVao() {
			return gioVao;
		}
		int layThoiGianDo() const{
			return thoiGianDo;
		}
		double layPhiDoXe() const{
			return phiDoXe;
		}
		bool layDangChiemCho() const {
			return dangChiemCho;
		}
		void ganMaXe(int ma) {
			maXe = ma;
		}
		void ganLoaiXe(string loai) {  
			loaiXe = loai;
		}
		void ganGioVao(int gio) {
			gioVao = gio;
		}
		void ganThoiLuong(int thoiLuong) {
			thoiGianDo = thoiLuong;
		} 
		void ganPhiDoXe(double phi) {
			phiDoXe = phi;
		} 
		void ganDangChiemCho(bool trangThai) {
			dangChiemCho = trangThai;
		}
		double tinhPhiDoXe() const{
			double phi;
			if(loaiXe == "Car" || loaiXe == "car") {
				phi = 6.00 * thoiGianDo;
			}
			else if(loaiXe == "Motorcycle" || loaiXe == "Motorcycle") {
				phi = 4.00 * thoiGianDo;
			}
			else if(loaiXe == "Bicycle" || loaiXe == "bicycle") {
				phi = 2.00 * thoiGianDo;
			}
			if(thoiGianDo <= 2) {
				if(gioVao == 6 || gioVao == 7 || gioVao == 8 || gioVao == 9 || gioVao == 15 || gioVao == 16 || gioVao == 17 || gioVao == 18 || gioVao == 18) {
					phi += ((phi * 30) / 100);
				}
				else {
					phi -= ((phi * 5) / 100);
				}
			}
			if(thoiGianDo >= 3) {
				if(loaiXe == "Car" || loaiXe == "car") {
					phi = (6.00 * 2) - ((6.00 * 2 * 30) / 100);
					phi += (6.00 * (thoiGianDo - 2)) - (6.00 * ((thoiGianDo - 2) * 10) / 100);
				}
				else if(loaiXe == "Motorcycle" || loaiXe == "Motorcycle") {
					phi = (4.00 * 2) - ((4.00 * 2 * 30) / 100);
					phi += (4.00 * (thoiGianDo - 2)) - (4.00 * ((thoiGianDo - 2) * 10) / 100);
				}
				else if(loaiXe == "Bicycle" || loaiXe == "bicycle") {
					phi = (2.00 * 2) - ((2.00 * 2 * 30) / 100);
					phi += (2.00 * (thoiGianDo - 2)) - (2.00 * ((thoiGianDo - 2) * 10) / 100);
				}
			}
			return phi;
		}
		void hienThi() const{
		}
};
class baiXe {
	private:
		int maBai;
		char kichThuoc;
		phuongTien pt1, pt2, pt3;
		bool co1, co2, co3;
	public:
		baiXe() {
			maBai = 0;
			kichThuoc = 'N';
			co1 = co2 = co3 = false;
		}
		baiXe(int ma, char kt) {
			maBai = ma;
			kichThuoc = kt;
			co1 = co2 = co3 = false;
		}
		int layMa() const {
			return maBai;
		}
		bool them(phuongTien v) {
			int cap = (kichThuoc == 'S') ? 1 : (kichThuoc == 'M') ? 2 : 3;
			if (cap >= 1 && !co1) { pt1 = v; co1 = true; return true; }
    		if (cap >= 2 && !co2) { pt2 = v; co2 = true; return true; }
    		if (cap >= 3 && !co3) { pt3 = v; co3 = true; return true; }
			return false;
		}
		bool xoa(int maXe) {
			if (co1 && pt1.layMaXe() == maXe) {
        		if (co2) {
            		pt1 = pt2;
            		if (co3) { pt2 = pt3; co3 = false; }
            		else co2 = false;
        		} 
				else co1 = false;
        		return true;
    		}
    		if (co2 && pt2.layMaXe() == maXe) {
        		if (co3) { pt2 = pt3; co3 = false; }
        		else co2 = false;
        		return true;
    		}
    		if (co3 && pt3.layMaXe() == maXe) {
        		co3 = false;
        		return true;
    		}
			return false;
		}
		bool chua(int maXe) const{
			if (co1 && pt1.layMaXe() == maXe) return true;
    		if (co2 && pt2.layMaXe() == maXe) return true;
    		if (co3 && pt3.layMaXe() == maXe) return true;
    		return false;
		}
		void hienThi() const{
			int cap = (kichThuoc == 'S') ? 1 : (kichThuoc == 'M') ? 2 : 3;
    		int soXe = co1 + co2 + co3;
    		cout << "Bai " << maBai << " [" << kichThuoc << "] " << soXe << "/" << cap << " xe\n";
    		if (co1) pt1.hienThi();
    		if (co2) pt2.hienThi();
    		if (co3) pt3.hienThi();
		}
		bool coLoai(string loai, int& dem, double& tong) const {
    		dem = 0; tong = 0;
    		if (co1 && pt1.layLoaiXe() == loai) { ++dem; tong += pt1.tinhPhiDoXe(); }
    		if (co2 && pt2.layLoaiXe() == loai) { ++dem; tong += pt2.tinhPhiDoXe(); }
    		if (co3 && pt3.layLoaiXe() == loai) { ++dem; tong += pt3.tinhPhiDoXe(); }
    		return dem > 0;
		}
};		
class SystemInterFace {
	private:
		baiXe bai1, bai2, bai3;
		bool co1, co2, co3;
	public:
		SystemInterFace() {
			co1 = co2 = co3 = false;
		}
};

int main() {
	
}
