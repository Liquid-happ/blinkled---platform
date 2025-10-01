Dự án: Điều khiển LED bằng ESP32 và nút nhấn (OneButton)

Giới thiệu
Dự án này sử dụng Arduino và thư viện OneButton để điều khiển LED bằng nút nhấn với các chức năng sau:

- Single Click (nhấn 1 lần): Bật/Tắt LED.  
- Double Click (nhấn 2 lần liên tiếp): Chuyển sang chế độ **nháy LED**.  

Thư viện [OneButton](https://github.com/mathertel/OneButton) giúp xử lý sự kiện nút nhấn dễ dàng và gọn code hơn.

Yêu cầu phần cứng
- ESP32 DevKit (hoặc board ESP32 bất kỳ).  
- 1 LED + điện trở (220Ω).  
- 1 nút nhấn.  
- Breadboard + dây nối.  

 Sơ đồ kết nối
- LED: nối vào GPIO 2 (qua điện trở).  
- Button: nối vào GPIO 4, kéo xuống GND.  

