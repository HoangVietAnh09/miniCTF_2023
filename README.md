# Write_Up miniCTF 2023
***
## ✨Warm_up✨
|Challenges|Flag|                
|:---|:---|
|Base64 |miniCTF{b4s364_3ncrypt3d_by_ckjd0k}|
|Filefolder||
|INT||
|Welcome Web |miniCTF{Welcome_to_Web_challenge}|
|Caesar Cipher |miniCTF{N0w_U_Kn0w_HoW_t0_3ncrYpt_Ur_M3s54g3}|
|Binary|miniCTF{congratulations}|
#### - *Base64*
  Như tên đề bài.
#### - *Filefolder*
  Bài này mọi người chú ý thời gian và tên file.
#### - *INT*
  Code python thêm module Crypto.Util.number rồi dùng hàm long_to_bytes().
#### - *Welcome Web*
  check source, check source, check source.
#### - *Caesar Cipher*
  Như tên đề bài.
#### - *Binary*
  Như tên đề bài.

  
  
***
## ✨Web✨
|Challenges|Flag|              
|:---|:---|
|Epmuoihai |miniCTF{EHE_TE_NANDAYO_?}|
|Flappy Flag |miniCTF{1f_u_4r3_4_pr0_pl4y3r_u_c4n_get_th1s_by_IDOR}|
|Piece Of Cake 1 |miniCTF{0nc3_4641n_y0u_c4n_d0_17}|
|Where are the Robots? |miniCTF{ca1cu1at1ng_Mach1n3s_8028f}|
| Piece Of Cake 2 |miniCTF{411_7h3_p13c35_h4v3_833n_f0und}|
| Dry Cookie |miniCTF{C00k1e_i5_s0_w3t}|

#### - *Epmuoihai*
  Mình làm theo hướng dẫn vào check source thi thấy được flag. Nhưng mà đây là fake flag. Đăng nhâp theo username & password trong source thì sẽ thấy được real flag.
#### - *Flappy Flag*
  Đầu tiền vào file game.js trong source code. Chú ý quan sát một chút thì mình thấy có một đoạn được mã hóa MD5 là "327a6c4304ad5938eaf0efb6cc3e53dc". Mình thử giải mã thì được là "flag". Tiếp đến các bạn ínpect rồi vào vào thẻ console gõ lệnh 'fetch("327a6c4304ad5938eaf0ef")'. Sau đó sẽ có một file được , mở file và lấy flag thôi.
#### - *Piece Of Cake 1*
  Bài này check , check hết các file là ra.
#### - *Where are the Robots?*
  Như gợi thì thì mình mình thử thảy đổi url bằng cách thêm "robots.txt" vào. rồi nó lại hiện thêm hint rồi lại thay đổi url theo hint là ra.
#### - *Piece Of Cake 2*
  Check source thấy được part 1 rồ check tiếp các file thì thấy được part 2. part 3 có được bằng cách thay đổi đường dẫn bằng cách thêm "robots.txt". còn part 4 thì cần phải thêm "/.htaccess".
#### - *Dry Cookie*
  Như gợi ý thì bài này có liên quan đến cookie. Mình vào xem cookie thì thấy value = -1. Mình đổi thành 1 rồi f5 lại web thì được flag.

  
***
## ✨Misc✨
|challenges|Flag|
|:---|:---|
|Ping|miniCTF{64.227.14.145}|
|Return Space Tab |miniCTF{111491<3_lanGuaG3!!!} |
|NASA|miniCTF{today@nasa.gov}|

#### - *Ping*
  Mở terminal hoặc cmd lên rồi nhập lệnh "ping minictf.infosecptit.club" sẽ được địa chỉ ip của web.
#### - *Return Space Tab*
  Bài này decode dựa trên khoảng trắng. Mình tim web nào đấy decode online là xong.
#### - *NASA*
  Tìm ở trang này web.archive.org.
***
## ✨Forencis✨
|Challenges|Flag|              
|:---|:---|
|Redacted |miniCTF{r3d4ct3d_m3ss4g3_15nt_h4rd_r1ght}|
|Tired Cat ||
|Comment |miniCTF{ch3ck_c0mm3nt}|
|Notepad ||
|Encyclopedia ||
|Sharp eyed ||
|What's wrong with the picture? ||
|8 bit sound ||
#### - *Redacted*
  Bài này mình dùng pdftohtml trong linux. 
  
  ![image](https://github.com/HoangVietAnh09/miniCTF_2023/assets/111860567/e9ecf0ea-c64d-442c-91e3-c2da6d194ec7)
#### - *Tired Cat*
#### - *Comment*
  Bài có hint là cmt nên mình nghĩ đến exiftool. Mình thử đùng và thấy flag.
#### - *Notepad*
#### - *Encyclopedia*
#### - *Sharp eyed*
#### - *What's wrong with the picture? *
#### - *8 bit sound*



***
## ✨Re✨
|Challenges|Flag|              
|:---|:---|
|Sort |miniCTF{R3_i5_v3ry_e4sy_h3h3h3_g00d_luck}|
|Header File |miniCTF{N0w_U_Kn0w_H0w_T0_Wr1t3_Ur_0wn_L1Br4ry}|
|XOR |miniCTF{4re_y0u_re4dy_t0_r3v3rs3_?}|
|String |miniCTF{c0nqr4tul4tj0ns_0n_kn0wjnq_h0w_t0_0p3n_tk3_d00r}|

#### - *Sort*
  Như tên bài sort lại thôi.
#### - *Header File *
  Bài này downfile về rồi run thôi.
#### - *XOR*
  Mình reverse lại thôi.
#### - *String*
  Câu này thì mình phải dùng đến linux. Thay đổi quền truye cập file bằng lệnh chmod rồi chạy file ta sẽ được flag.
  
  ![image](https://github.com/HoangVietAnh09/miniCTF_2023/assets/111860567/a64ae07e-41a1-4038-ad43-716d70992652)

***
## ✨Crypto✨
|Challenges|Flag|              
|:---|:---|
|Caesar Cipher 2 |miniCtF{C43sAR_C1F3R_But_MY_ALF4B3t}|
|ROT|miniCTF{R0t10_r3p3aT_10_1im3s}|
|Navy signal code |miniCTF{Y0U_KN0W_N4VY_C0D3}|
|Char |miniCTF{I_kn0w_u_kn0w_4sc11_t4b1e}|
|Equations |miniCTF{tk3_s3cr3t_numb3r_js_911429}|
|Fake Flag |miniCTF{tH3_S3cr3t_hA$_8n_S0lv3d}|
|7 Segment |miniCTF{7-segment_display_is_fun}|
|No More Than 10 |miniCTF{C4n_Y0u_Wr1t3_My_C0rr3ct_M3ss493?}|
|Carry Number |miniCTF{B1n4ry_4ga1n_R19ht?}|

#### - *Caesar Cipher 2*
  Dùng web: https://cryptii.com/pipes/caesar-cipher để decode.
#### - *ROT*
  Caesar bình thường thôi.
#### - *Navy signal code*
  Lên google search Navy signal decode rồi decode thôi.
#### - *Char*
  Xem ảnh và decode.
#### - *Equations*
  Bài này lấy máy tính ra bấm giải hệ phương trình bậc 3 thôi.
#### - *Fake Flag*
  Dựa vào fake flag mà đề cho thì mình tìm được real secret là kí tự ":". Sau khi đã có real secret thì mình dùng thêm fake flag để tìm ra flag như code.
#### - *7 Segment*
  Chuyển về một dòng rồi google search tool 7 segments thôi. Sau khi decode 7 segments thì flag sẽ ở dạng mã hex.
#### - *No More Than 10*
  Bài này thì đoán nghĩa thôi.
  c -> m
  E -> Y
  h -> r
#### - *Carry Number*
  Theo gợi ý của đề bài thì bài này mình phải tìm nhớ của phép tính cộng hai số rồi chuyển thành một chuỗi nhị phân. Sau đó reverse lại chuỗi binary đó rồi decode thôi.
***

