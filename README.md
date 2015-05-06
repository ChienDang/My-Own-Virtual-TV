# My-Own-Virtual-TV
Working Project - Mọi thay đổi trong khi làm việc sẽ được lưu trữ tại đây.
## Ý tưởng mới cho trường hợp camera di chuyển
Với 1 camera và 1 trường quay chuyên nghiệp, tất cả mọi thứ đều là ảo, thực tế việc dựng 1 trường quay ảo sẽ dễ hơn việc chỉ làm TV ảo. Cụ thể, ta sẽ dùng thủ thuật sau để key được trong cả 2 trường hợp camera đặt tĩnh và camera di chuyển:
### Do góc quay của camera có thể đủ trùm toàn bộ trường quay, nên coi cả trường quay là màn hình xanh, ta sẽ thực hiện 2 lần key như sau:
+ Lần key thứ nhất, key cả trường quay xanh bằng 1 bức ảnh (trước mắt là như vậy) với các chi tiết tùy ý trong đó có 1 **phần chữ nhật xanh** tương ứng với TV ảo, đặt ở vị trí thích hợp.
+ Lần key thứ hai, key trên màn hình key thứ nhất, tức là key đè lên phần đã key trước, cụ thể là key vào phần TV ảo ở trên, do ta đã làm được cho tất cả các trường hợp camera tĩnh, và cho dù camera có di chuyển thế nào, ta ghi đè lên hình key ban đầu nên luôn luôn có thể thực hiện được!
