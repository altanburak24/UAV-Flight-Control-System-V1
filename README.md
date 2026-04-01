# UAV-Flight-Control-System-V1
Bu kod İHA' nın kalkış emrini , batarya seviyesini , istenilen irtifaya ulaşınca bilgi vermesini simüle eder.
Bu proje, bir İnsansız Hava Aracının (İHA) temel kalkış, irtifa yönetimi ve sistem güvenlik kontrollerini simüle etmek amacıyla C++ diliyle geliştirilmiştir. Projenin ana odak noktası, havacılık yazılımlarında kullanılan modüler fonksiyon yapısını ve kullanıcı etkileşimli kontrol döngülerini anlamaktır.

teknik özellikler = 
Bu yazılımda aşağıdaki programlama konseptleri uygulanmıştır:

Fonksiyonel Ayrıştırma (Modularization): Motor durumu, irtifa kontrolü ve batarya denetimi için ayrı fonksiyonlar (void) kullanılarak kodun okunabilirliği artırılmıştır.

Veri Giriş ve İşleme: Kullanıcıdan alınan komutlara göre sistemin dinamik tepki vermesi sağlanmıştır.

Döngüsel Kontrol (Loops): for döngüsü ile gerçek zamanlı irtifa artışı simüle edilmiştir.

Güvenlik Mantığı (Safety Logic): Batarya seviyesi kritik eşiğin (%20) altına düştüğünde kullanıcıyı uyaran bir kontrol mekanizması eklenmiştir.

kullanım = 
Programı çalıştırdığınızda sistem sizden İHA'yı başlatmak için bir komut (1) bekler.

Motorlar aktif edildikten sonra hedef irtifa (metre cinsinden) girilir.

Sistem kademeli olarak yükselir ve hedef yüksekliğe ulaştığında onay verir.

Son aşamada batarya kontrolü yapılarak uçuş güvenliği raporlanır.

gelecek planları = 
Otomatik iniş (Auto-landing) fonksiyonu eklenmesi.
Anlık batarya tüketim algoritmasının entegrasyonu.
Sensör verilerini simüle eden yapay veri setlerinin kullanımı.
