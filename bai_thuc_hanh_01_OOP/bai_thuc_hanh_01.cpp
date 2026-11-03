#include <iostream>

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
					phi += (6.00 * (thoiGianDo - 2)) - ((6.00 * ((thoiGianDo - 2) * 10) / 100);
				}
				else if(loaiXe == "Motorcycle" || loaiXe == "Motorcycle") {
					phi = (4.00 * 2) - ((4.00 * 2 * 30) / 100);
					phi += (4.00 * (thoiGianDo - 2)) - ((4.00 * ((thoiGianDo - 2) * 10) / 100);
				}
				else if(loaiXe == "Bicycle" || loaiXe == "bicycle") {
					phi = (2.00 * 2) - ((2.00 * 2 * 30) / 100);
					phi += (2.00 * (thoiGianDo - 2)) - ((2.00 * ((thoiGianDo - 2) * 10) / 100);
				}
			}
			return phi;
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
			if(c01 == true) {
				pt1 = v;
				co1 = true;
				return true;
			}
			if(c02 == true) {
				pt1 = v;
				co1 = true;
				return true;
			}
			if(c03 == true) {
				pt1 = v;
				co1 = true;
				return true;
			}
		}
};		
	
