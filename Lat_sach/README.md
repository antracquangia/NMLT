# Đề bài
**SỬ DỤNG TÀI LIỆU MỘT CÁCH HIỆU QUẢ**
======================================

Sinh viên UIT chuẩn bị bước vào kỳ thi cuối kỳ IT001 đầy cam go và khắc nghiệt. Qua quá trình quan sát và phân tích điểm các bài Quiz ở lớp, các thầy cô thấy rằng nếu không cho sinh viên sử dụng tài liệu thì khó lòng mà các bông hoa nhỏ có thể qua môn được.

Sử dụng tài liệu một cách hiệu quả cũng là một kỹ năng cần thiết mà các bạn sinh viên nên trang bị cho bản thân. Mục đích của kỹ năng này là lật sao để nhanh kiếm thấy đáp án nhất có thể.

Giả sử tài liệu có **n** trang và đáp án nằm ở trang **p**. Ngoài ra, trang số **1** luôn nằm ở trang bên phải.

Quy tắc là các bạn chỉ được lật từ đầu, hoặc từ cuối và chỉ được phép lật từng trang. Hỏi các bạn cần lật **ít nhất** bao nhiêu trang để tìm thấy đáp án?

**INPUT**
----------

*   2 số nguyên dương lần lượt thể hiện tổng số trang trong tài liệu **n** và trang chứa đáp án cần tìm **p** (1 <= n <= 10^9; 1 <= p <= n)

**OUTPUT**
----------

*   Số trang ít nhất cần lật để tìm thấy đáp án

**VÍ DỤ**
---------

<table border="1" cellpadding="1" cellspacing="1" style="box-sizing: border-box; caption-side: bottom; border-collapse: collapse; color: rgb(62, 63, 58); font-family: Roboto, -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, &quot;Helvetica Neue&quot;, Arial, sans-serif, &quot;Apple Color Emoji&quot;, &quot;Segoe UI Emoji&quot;, &quot;Segoe UI Symbol&quot;; font-size: 16px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; white-space: normal; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial; width: 500px;"><tbody style="box-sizing: border-box; border-color: inherit; border-style: solid; border-width: 0px;"><tr style="box-sizing: border-box; border-color: inherit; border-style: solid; border-width: 1px;"><td style="box-sizing: border-box; border-color: inherit; border-style: solid; border-width: 0px; text-align: center;"><strong style="box-sizing: border-box; font-weight: bolder;">Input</strong></td><td style="box-sizing: border-box; border-color: inherit; border-style: solid; border-width: 0px; text-align: center;"><strong style="box-sizing: border-box; font-weight: bolder;">Output</strong></td></tr><tr style="box-sizing: border-box; border-color: inherit; border-style: solid; border-width: 1px;"><td style="box-sizing: border-box; border-color: inherit; border-style: solid; border-width: 0px; text-align: center;">6 2</td><td style="box-sizing: border-box; border-color: inherit; border-style: solid; border-width: 0px; text-align: center;">1</td></tr><tr style="box-sizing: border-box; border-color: inherit; border-style: solid; border-width: 1px;"><td style="box-sizing: border-box; border-color: inherit; border-style: solid; border-width: 0px; text-align: center;">5 4</td><td style="box-sizing: border-box; border-color: inherit; border-style: solid; border-width: 0px; text-align: center;">0</td></tr></tbody></table>

**GIẢI THÍCH**
--------------

**Case 1:**

Nếu lật từ đầu sách, lật sang 1 trang thì có trang 2, 3. Nếu lật từ đầu sách thì cần lật 1 lần.

Nếu lật từ cuối sách (có trang 6), lật lần 1 thì qua trang 4, 5. Lật lần 2 thì qua trang 2, 3. Nếu lật từ cuối sách thì cần lật 2 lần. 

Đáp án là 1.

**Case 2:**

Nếu lật từ đầu sách (có trang 1), lật lần 1 thì qua trang 2, 3. Lật lần 2 thì qua trang 4, 5. Nếu lật từ đầu sách thì cần lật 2 lần.

Nếu lật từ cuối sách (có trang 4, 5), không cần lật. Nếu lật từ cuối sách thì cần lật 0 lần. 

Đáp án là 0.

# Cách giải:
Có 2 cách để lật sách từ đầu trang hoặc từ cuối trang
* Nếu lật từ đầu trang thì số trang cần lật là p/2
* Nếu lật từ cuối trang thì số trang cần lật là (n-p)/2, trong truong hop n chan, p le là (n-p+1)/2
