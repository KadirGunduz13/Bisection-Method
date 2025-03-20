# 🕒 İkiye Bölme Yöntemi (Bisection Method) - C Uygulaması

Bu proje, **C programlama dili** ile **İkiye Bölme Yöntemi (Bisection Method)** kullanılarak fonksiyon kökü bulmayı amaçlamaktadır.  
Numerik analizde sıkça kullanılan bu yöntem, belirli bir \[a, b\] aralığında fonksiyonun işaret değiştirdiği noktayı bularak köke yaklaşır.  

## 🚀 Nasıl Çalışır?
- Kullanıcı, kök bulunmasını istediği aralığı belirler.
- Program, verilen hata payına (EPSILON) kadar sürekli olarak aralığı ikiye böler.
- Fonksiyonun işaret değiştirdiği noktayı bularak yaklaşık kök değerini ekrana yazdırır.

---

## 📌 Kullanılan Fonksiyon
Bu kodda örnek olarak **f(x) = x³ - x - 2** fonksiyonu kullanılmıştır.  
Farklı bir fonksiyon denemek isterseniz `func(double x)` fonksiyonunu değiştirebilirsiniz.

```c
double func(double x) {
    return x*x*x - x - 2;
}
```

---

## 🛠 Kullanım

### **1️⃣ Derleme**
Kodunuzu bir C derleyicisi ile aşağıdaki şekilde derleyebilirsiniz:

```sh
gcc bisection_method.c -o bisection
```

### **2️⃣ Çalıştırma**
Daha sonra programı aşağıdaki komutla çalıştırabilirsiniz:

```sh
./bisection
```

---

## 📈 Örnek Çıktı

```sh
Kök yaklaşık olarak: 1.5214
```

---

## 📝 Lisans
Bu proje MIT Lisansı ile sunulmuştur. Dilediğiniz gibi kullanabilir ve geliştirebilirsiniz.

---

📌 **Geliştirici:** [Kadir Gündüz](https://github.com/kadirgunduz)  

