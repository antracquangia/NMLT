# Đề bài:
Viết chương trình nhập vào 2 chuỗi và thực hiện so sánh 2 chuỗi xem chúng có “bằng
nhau” hay không? Biết rằng 2 chuỗi được xem là “bằng nhau” (theo 1 cách đặc biệt) nếu
như thỏa các điều kiện sau:
* 2 chuỗi có độ dài bằng nhau
* nếu ký tự thứ i trong 1 chuỗi là chữ cái thì ký tự thứ i trong chuỗi còn lại cũng phải là
chữ cái và chúng giống nhau, không phân biệt chữ hoa chữ thường.
## Ví dụ: 
Cho 2 chuỗi s1 “abcd123” và s2 “ABcD2#.”, 2 chuỗi này được xem là bằng nhau
theo quy ước trên, bởi vì chúng có cùng độ dài và nếu xét từng cặp ký tự ở vị trí giống
nhau trong 2 chuỗi thì: a=A, b=B, c=c, d=D, 1=2, 2=#, 3=. (tức là các cặp ký tự không
phải là chữ cái thì được xem là giống nhau).
Nếu so sánh s1 “abcd123” với s3 “ABcD2#x” thì 2 chuỗi không bằng nhau vì cặp ký tự
cuối (3, x) có 1 ký tự là chữ cái nhưng ký tự kia không là chữ cái.
## Cách giải:
* Đầu tiên so sánh độ dài giữa hai chuỗi trước rồi xét tiếp từng cặp là chữ hay số
* Nếu là chữ thì phải chênh lệch 32 (giữa chữ hoa và chữ thường)
* Nếu cả 2 đều không là chữ thì kí tự nào cũng đúng
* Các trường hợp còn lại thì sai
