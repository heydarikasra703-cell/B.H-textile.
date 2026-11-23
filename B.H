
<!DOCTYPE html>
<html lang="fa" dir="rtl">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<meta name="theme-color" content="#172b25">
<meta name="description" content="B.H TEXTILE؛ مجموعه‌ای متنوع از پارچه‌های لباس، مخمل، ساتن، ابریشم و پارچه‌های خاص.">
<title>B.H TEXTILE | دنیای پارچه‌های خاص</title>

<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Vazirmatn:wght@300;400;500;600;700;800&display=swap" rel="stylesheet">

<style>
:root{
  --green:#203b31;
  --green2:#315647;
  --gold:#c5a16c;
  --gold-light:#ead9bc;
  --cream:#f8f6f1;
  --white:#fff;
  --ink:#25342d;
  --muted:#858a83;
  --line:#eae7df;
  --shadow:0 12px 40px rgba(25,45,35,.09);
  --radius:16px;
}
*{box-sizing:border-box}
html{scroll-behavior:smooth;scroll-padding-top:90px}
body{
  margin:0;
  font-family:'Vazirmatn',sans-serif;
  background:var(--cream);
  color:var(--ink);
}
button,input,select{font:inherit}
button{cursor:pointer}
a{color:inherit;text-decoration:none}
img{display:block;max-width:100%}
.container{width:min(1180px,90%);margin:auto}
.eyebrow{
  color:var(--gold);
  font-size:11px;
  font-weight:700;
  letter-spacing:3px;
  text-transform:uppercase;
}
.section{padding:85px 0}
.section-heading{text-align:center;margin-bottom:42px}
.section-heading h2{font-size:30px;margin:10px 0;font-weight:800}
.section-heading p{color:var(--muted);font-size:14px;line-height:2}
.btn{
  border:0;
  border-radius:7px;
  padding:13px 22px;
  font-weight:600;
  transition:.25s;
  display:inline-flex;
  align-items:center;
  justify-content:center;
  gap:9px;
}
.btn-primary{background:var(--gold);color:#fff}
.btn-primary:hover{background:#a9824e;transform:translateY(-2px)}
.btn-dark{background:var(--green);color:#fff}
.btn-dark:hover{background:var(--green2)}
.btn-outline{background:transparent;border:1px solid #d8d2c5;color:var(--green)}
.btn-outline:hover{background:var(--green);color:white}
.icon-btn{
  border:1px solid var(--line);
  background:white;
  width:42px;height:42px;
  border-radius:50%;
  display:grid;place-items:center;
  color:var(--green);
  position:relative;
}
.icon-btn svg{width:19px;height:19px}
.announcement{
  background:var(--green);
  color:#f7eee0;
  text-align:center;
  padding:9px 15px;
  font-size:12px;
}
.announcement span{color:var(--gold-light)}
/* HEADER */
header{
  height:82px;
  position:sticky;
  top:0;
  z-index:50;
  background:rgba(255,255,255,.96);
  backdrop-filter:blur(15px);
  border-bottom:1px solid #eeeae2;
}
.header-inner{
  height:100%;
  display:flex;
  align-items:center;
  justify-content:space-between;
  gap:25px;
}
.logo{
  display:flex;
  align-items:center;
  gap:11px;
  color:var(--green);
  flex-shrink:0;
}
.logo-mark{
  width:43px;height:43px;
  border:1px solid var(--gold);
  display:grid;place-items:center;
  font-family:Georgia,serif;
  font-size:18px;
  font-weight:bold;
  letter-spacing:-2px;
}
.logo-text{font-size:19px;font-weight:800;letter-spacing:1px}
.logo-text span{color:var(--gold)}
.logo small{display:block;font-size:9px;letter-spacing:3px;color:#999;font-weight:400}
nav{display:flex;align-items:center;gap:28px}
nav a{font-size:13px;color:#555;transition:.2s}
nav a:hover,nav a.active{color:var(--gold)}
.header-actions{display:flex;align-items:center;gap:10px}
.cart-count{
  position:absolute;
  top:-5px;right:-5px;
  background:var(--gold);
  color:white;
  border-radius:50%;
  width:19px;height:19px;
  font-size:10px;
  display:grid;place-items:center;
}
.menu-toggle{display:none}
/* HERO */
.hero{
  min-height:610px;
  background:
    linear-gradient(90deg,rgba(13,31,24,.93) 0%,rgba(13,31,24,.72) 48%,rgba(13,31,24,.18) 100%),
    url('https://www.gebrueder-berger.de/upload/large/large_6407568f3941feb03f253587_7c57196b42ff32e7983ce88a978c8dc3bc249932f9aaf293085dbf63b8337c41_6407588a.jpg') center/cover;
  display:flex;
  align-items:center;
  color:white;
  position:relative;
  overflow:hidden;
}
.hero:after{
  content:"";
  position:absolute;
  left:7%;bottom:0;
  width:230px;height:230px;
  border:1px solid #ffffff25;
  border-radius:50%;
  transform:translateY(50%);
}
.hero-content{max-width:650px;position:relative;z-index:1;padding:90px 0}
.hero h1{
  font-size:clamp(36px,5vw,63px);
  line-height:1.5;
  margin:18px 0;
  font-weight:800;
}
.hero h1 span{color:var(--gold-light)}
.hero p{
  color:#e2e5df;
  font-size:15px;
  line-height:2.4;
  max-width:520px;
  margin-bottom:30px;
}
.hero-actions{display:flex;gap:12px;flex-wrap:wrap}
.hero .btn-outline{color:white;border-color:#ffffff70}
.hero .btn-outline:hover{background:white;color:var(--green)}
.hero-note{
  margin-top:55px;
  display:flex;
  gap:30px;
  flex-wrap:wrap;
  color:#ddd;
  font-size:12px;
}
.hero-note strong{color:var(--gold-light);font-size:20px;display:block}
/* BENEFITS */
.benefit-strip{
  background:white;
  box-shadow:var(--shadow);
  position:relative;
  z-index:2;
  margin-top:-1px;
}
.benefits{
  display:grid;
  grid-template-columns:repeat(4,1fr);
  padding:25px 0;
}
.benefit{
  display:flex;
  justify-content:center;
  align-items:center;
  gap:13px;
  border-left:1px solid var(--line);
  padding:5px 12px;
}
.benefit:last-child{border:0}
.benefit-icon{
  width:43px;height:43px;
  display:grid;place-items:center;
  background:#f6f1e7;
  color:var(--gold);
  border-radius:50%;
  font-size:20px;
}
.benefit strong{display:block;font-size:13px}
.benefit small{color:var(--muted);font-size:10px}
/* CATEGORIES */
.categories-grid{
  display:grid;
  grid-template-columns:repeat(4,1fr);
  gap:20px;
}
.category-card{
  height:280px;
  position:relative;
  overflow:hidden;
  border-radius:var(--radius);
  cursor:pointer;
  background:#ddd;
}
.category-card img{
  width:100%;height:100%;
  object-fit:cover;
  transition:transform .6s;
}
.category-card:hover img{transform:scale(1.09)}
.category-card:after{
  content:"";
  position:absolute;inset:0;
  background:linear-gradient(0deg,rgba(10,25,18,.88),transparent 72%);
}
.category-info{
  position:absolute;
  bottom:0;right:0;left:0;
  padding:22px;
  color:white;
  z-index:1;
}
.category-info small{font-size:10px;color:var(--gold-light);letter-spacing:2px}
.category-info h3{font-size:21px;margin:5px 0}
.category-info span{font-size:11px;color:#ddd}
/* CATALOG */
#catalog{background:white;display:none}
.catalog-top{
  display:flex;
  justify-content:space-between;
  align-items:center;
  gap:20px;
  flex-wrap:wrap;
  margin-bottom:25px;
}
.catalog-top h2{font-size:27px;margin:12px 0 4px}
.catalog-top p{color:var(--muted);font-size:13px;margin:0}
.catalog-tools{display:flex;gap:10px;flex-wrap:wrap}
.search-box{
  position:relative;
}
.search-box input{
  width:260px;
  padding:12px 42px 12px 14px;
  border:1px solid var(--line);
  border-radius:7px;
  outline:none;
  background:#faf9f6;
}
.search-box input:focus{border-color:var(--gold)}
.search-box span{position:absolute;right:14px;top:11px;color:#999}
.sort-select{
  border:1px solid var(--line);
  border-radius:7px;
  background:#faf9f6;
  padding:10px;
  color:#555;
  outline:none;
}
.filters{display:flex;gap:9px;flex-wrap:wrap;margin:20px 0 30px}
.filter{
  border:1px solid var(--line);
  background:white;
  color:#777;
  border-radius:30px;
  padding:9px 18px;
  font-size:12px;
  transition:.2s;
}
.filter:hover,.filter.active{background:var(--green);border-color:var(--green);color:white}
.products-grid{
  display:grid;
  grid-template-columns:repeat(3,1fr);
  gap:25px;
}
.product-card{
  background:white;
  border:1px solid #eeece6;
  border-radius:12px;
  overflow:hidden;
  transition:.3s;
}
.product-card:hover{transform:translateY(-6px);box-shadow:var(--shadow)}
.product-image{height:280px;position:relative;overflow:hidden;background:#eee}
.product-image img{
  width:100%;height:100%;
  object-fit:cover;
  transition:.5s;
}
.product-card:hover .product-image img{transform:scale(1.05)}
.product-tag{
  position:absolute;
  top:14px;right:14px;
  background:white;
  color:var(--green);
  padding:6px 12px;
  font-size:10px;
  border-radius:30px;
}
.favorite{
  position:absolute;top:12px;left:12px;
  width:35px;height:35px;
  background:white;border:0;border-radius:50%;
  color:#999;font-size:19px;
}
.favorite.active{color:#c35c5c}
.product-info{padding:19px}
.product-info h3{margin:0 0 5px;font-size:17px}
.product-subtitle{color:var(--muted);font-size:11px}
.color-title{font-size:11px;color:#888;margin-top:17px}
.swatches{display:flex;gap:9px;flex-wrap:wrap;margin:10px 0 18px}
.swatch{
  width:23px;height:23px;
  border-radius:50%;
  border:2px solid white;
  outline:1px solid #ddd;
  cursor:pointer;
}
.swatch.selected{outline:2px solid var(--gold)}
.product-bottom{
  border-top:1px solid var(--line);
  padding-top:15px;
  display:flex;justify-content:space-between;align-items:center;
  gap:10px;
}
.price{font-size:16px;font-weight:800;color:var(--green)}
.price small{font-size:10px;color:#999;font-weight:400}
.product-bottom button{font-size:11px;padding:9px 13px}
.empty-state{
  text-align:center;padding:50px 10px;color:#888;
  grid-column:1/-1;
}
/* ABOUT */
.about-section{background:#eeece5}
.about-grid{
  display:grid;
  grid-template-columns:1fr 1fr;
  gap:65px;
  align-items:center;
}
.about-image{height:440px;position:relative}
.about-image img{width:100%;height:100%;object-fit:cover;border-radius:12px}
.about-image:after{
  content:"B.H TEXTILE";
  position:absolute;
  bottom:-18px;left:-18px;
  background:var(--green);
  color:var(--gold-light);
  padding:20px 28px;
  font-size:13px;
  letter-spacing:3px;
}
.about-copy h2{font-size:32px;line-height:1.7;margin:15px 0}
.about-copy p{font-size:14px;color:#777;line-height:2.5}
.about-points{display:grid;grid-template-columns:1fr 1fr;gap:15px;margin:25px 0}
.about-point{font-size:12px;color:#555}
.about-point b{color:var(--gold);margin-left:7px}
/* FEATURED */
.featured-banner{
  background:var(--green);
  color:white;
  padding:55px;
  border-radius:18px;
  display:flex;
  justify-content:space-between;
  align-items:center;
  gap:25px;
  overflow:hidden;
  position:relative;
}
.featured-banner:after{
  content:"";
  width:300px;height:300px;
  border:1px solid #ffffff18;
  border-radius:50%;
  position:absolute;left:20%;top:-180px;
}
.featured-banner h2{font-size:27px;margin:8px 0}
.featured-banner p{font-size:13px;color:#cbd5ce;line-height:2}
.featured-banner .btn{position:relative;z-index:1;white-space:nowrap}
/* REVIEWS */
.reviews-grid{display:grid;grid-template-columns:repeat(3,1fr);gap:20px}
.review{
  background:white;padding:25px;border-radius:12px;
  border:1px solid var(--line);
}
.stars{color:var(--gold);letter-spacing:3px}
.review p{font-size:13px;line-height:2.2;color:#777}
.review strong{font-size:12px}
.review small{display:block;color:#aaa;font-size:10px;margin-top:4px}
/* FAQ */
.faq-list{max-width:780px;margin:auto}
.faq-item{background:white;border:1px solid var(--line);margin-bottom:10px;border-radius:8px;overflow:hidden}
.faq-question{
  width:100%;background:white;border:0;
  display:flex;justify-content:space-between;
  padding:18px 20px;text-align:right;font-weight:600;
  color:var(--green);font-size:13px;
}
.faq-answer{display:none;padding:0 20px 18px;color:#777;font-size:12px;line-height:2.2}
.faq-item.open .faq-answer{display:block}
.faq-item.open .faq-question span{transform:rotate(45deg)}
/* CONTACT */
.contact-section{background:#192d25;color:white}
.contact-grid{display:grid;grid-template-columns:1fr 1fr;gap:55px}
.contact-section h2{font-size:30px}
.contact-section p{color:#c2ccc5;font-size:13px;line-height:2.3}
.contact-details{margin-top:25px;display:grid;gap:15px}
.contact-row{display:flex;align-items:center;gap:13px;color:#e5e9e5;font-size:13px}
.contact-row i{
  width:39px;height:39px;display:grid;place-items:center;
  background:#ffffff12;border-radius:50%;color:var(--gold-light);font-style:normal
}
.contact-form{
  background:white;color:var(--ink);
  padding:30px;border-radius:12px;
}
.contact-form h3{margin-top:0}
.form-group{margin-bottom:14px}
.form-group label{display:block;font-size:11px;margin-bottom:7px;color:#777}
.form-group input,.form-group textarea{
  width:100%;padding:12px;border:1px solid var(--line);
  border-radius:6px;outline:none;font-family:inherit;
}
.form-group textarea{height:100px;resize:vertical}
.form-group input:focus,.form-group textarea:focus{border-color:var(--gold)}
/* FOOTER */
footer{background:#102019;color:#aab5ad;padding:45px 0 20px}
.footer-grid{display:grid;grid-template-columns:1.5fr 1fr 1fr 1fr;gap:35px;padding-bottom:35px}
.footer-brand p{font-size:12px;line-height:2.3;color:#89958c;max-width:280px}
footer h4{color:white;font-size:13px;margin-top:0}
footer ul{padding:0;list-style:none}
footer li{margin:12px 0;font-size:11px}
footer li a:hover{color:var(--gold-light)}
.footer-bottom{
  border-top:1px solid #ffffff16;
  padding-top:20px;text-align:center;font-size:10px;color:#78857b
}
/* CART DRAWER */
.overlay{
  position:fixed;inset:0;background:#0008;z-index:90;
  opacity:0;visibility:hidden;transition:.3s;
}
.overlay.show{opacity:1;visibility:visible}
.cart-drawer{
  position:fixed;top:0;left:0;bottom:0;
  width:min(430px,100%);background:white;z-index:100;
  transform:translateX(-105%);transition:.35s;
  display:flex;flex-direction:column;
}
.cart-drawer.show{transform:translateX(0)}
.drawer-head{
  padding:22px;border-bottom:1px solid var(--line);
  display:flex;justify-content:space-between;align-items:center
}
.drawer-head h3{margin:0}
.close-btn{border:0;background:#f4f2ed;width:35px;height:35px;border-radius:50%;font-size:20px}
.cart-items{padding:15px 22px;overflow:auto;flex:1}
.cart-item{
  display:grid;grid-template-columns:75px 1fr auto;
  gap:12px;padding:15px 0;border-bottom:1px solid var(--line);
}
.cart-item img{width:75px;height:80px;object-fit:cover;border-radius:7px}
.cart-item h4{font-size:12px;margin:3px 0 5px}
.cart-item p{font-size:10px;color:#888;margin:3px 0}
.cart-item strong{font-size:12px;color:var(--green)}
.remove-item{border:0;background:none;color:#bb7777;font-size:17px}
.quantity-control{display:flex;align-items:center;gap:10px;margin-top:9px}
.quantity-control button{border:1px solid var(--line);background:white;width:24px;height:24px;border-radius:4px}
.drawer-footer{padding:22px;border-top:1px solid var(--line)}
.total-line{display:flex;justify-content:space-between;margin-bottom:15px;font-weight:800}
.drawer-footer .btn{width:100%}
.cart-empty{text-align:center;padding:65px 10px;color:#999;font-size:13px}
.cart-empty div{font-size:45px;margin-bottom:15px}
/* MODAL */
.modal{
  position:fixed;inset:0;z-index:120;
  background:#0009;display:none;align-items:center;justify-content:center;padding:18px;
}
.modal.show{display:flex}
.modal-box{
  width:min(820px,100%);background:white;border-radius:14px;
  overflow:hidden;display:grid;grid-template-columns:1fr 1fr;
  position:relative;max-height:90vh;overflow-y:auto;
}
.modal-image{min-height:400px;width:100%;height:100%;object-fit:cover}
.modal-content{padding:35px}
.modal-content h2{font-size:25px;margin:12px 0}
.modal-content p{font-size:12px;color:#777;line-height:2.2}
.modal-close{position:absolute;top:12px;left:12px;z-index:2}
.modal-price{font-size:21px;color:var(--green);font-weight:800;margin:20px 0}
.modal-price small{font-size:11px;color:#999;font-weight:400}
.modal-colors{display:flex;gap:10px;flex-wrap:wrap;margin:15px 0}
.modal-color{
  border:1px solid var(--line);background:white;
  border-radius:20px;padding:7px 12px;font-size:11px
}
.modal-color.selected{border-color:var(--gold);background:#f8f2e8}
.meter-input{display:flex;align-items:center;gap:12px;margin:20px 0}
.meter-input input{width:75px;padding:9px;border:1px solid var(--line);border-radius:5px}
/* TOAST */
.toast{
  position:fixed;bottom:25px;right:25px;z-index:200;
  background:var(--green);color:white;
  padding:14px 22px;border-radius:8px;
  font-size:12px;box-shadow:var(--shadow);
  transform:translateY(100px);opacity:0;transition:.3s;
}
.toast.show{transform:translateY(0);opacity:1}
.back-top{
  position:fixed;bottom:25px;left:25px;
  width:42px;height:42px;border:0;border-radius:50%;
  background:var(--gold);color:white;font-size:20px;
  display:none;z-index:40;box-shadow:var(--shadow)
}
.back-top.show{display:block}
@media(max-width:950px){
  nav{gap:15px}
  .categories-grid{grid-template-columns:repeat(3,1fr)}
  .footer-grid{grid-template-columns:repeat(2,1fr)}
}
@media(max-width:700px){
  header{height:70px}
  nav{
    display:none;position:absolute;top:70px;right:0;left:0;
    background:white;padding:20px 5%;box-shadow:var(--shadow);
    flex-direction:column;align-items:stretch;gap:18px
  }
  nav.open{display:flex}
  .menu-toggle{display:grid}
  .header-inner{gap:10px}
  .logo-text{font-size:16px}
  .hero{min-height:560px;background-position:60% center}
  .hero-content{padding:65px 0}
  .hero-note{margin-top:35px;gap:20px}
  .benefits{grid-template-columns:repeat(2,1fr);gap:15px}
  .benefit{border:0;justify-content:flex-start}
  .categories-grid{grid-template-columns:repeat(2,1fr);gap:12px}
  .category-card{height:230px}
  .products-grid{grid-template-columns:repeat(2,1fr);gap:13px}
  .product-image{height:210px}
  .product-info{padding:13px}
  .product-info h3{font-size:14px}
  .price{font-size:13px}
  .product-bottom{align-items:flex-start;flex-direction:column}
  .product-bottom button{width:100%}
  .about-grid,.contact-grid{grid-template-columns:1fr;gap:35px}
  .about-image{height:320px}
  .featured-banner{padding:30px;flex-direction:column;align-items:flex-start}
  .reviews-grid{grid-template-columns:1fr}
  .modal-box{grid-template-columns:1fr}
  .modal-image{height:230px;min-height:230px}
  .modal-content{padding:25px}
  .section{padding:65px 0}
}
@media(max-width:430px){
  .categories-grid{grid-template-columns:1fr 1fr}
  .category-card{height:190px}
  .products-grid{grid-template-columns:1fr}
  .product-image{height:270px}
  .product-bottom{flex-direction:row;align-items:center}
  .product-bottom button{width:auto}
  .catalog-tools{width:100%}
  .search-box{flex:1}
  .search-box input{width:100%}
  .sort-select{max-width:125px}
  .footer-grid{grid-template-columns:1fr 1fr;gap:20px}
  .hero h1{font-size:35px}
  .about-points{grid-template-columns:1fr}
}
</style>
</head>

<body>

<div class="announcement">
  مجموعه جدید پارچه‌های B.H TEXTILE آماده مشاهده است
  <span> | کیفیت، زیبایی و تنوع در کنار هم</span>
</div>

<header>
  <div class="container header-inner">
    <a href="#home" class="logo">
      <div class="logo-mark">B.H</div>
      <div class="logo-text">B.H <span>TEXTILE</span><small>FABRIC COLLECTION</small></div>
    </a>

    <nav id="mainNav">
      <a href="#home">صفحه اصلی</a>
      <a href="#categories">دسته‌بندی پارچه‌ها</a>
      <a href="#about">درباره ما</a>
      <a href="#reviews">نظرات</a>
      <a href="#contact">تماس با ما</a>
    </nav>

    <div class="header-actions">
      <button class="icon-btn" onclick="openCart()" aria-label="سبد خرید">
        <svg viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="1.7">
          <path d="M3 3h2l2.5 12h10.8l2.2-8H6"/>
          <circle cx="10" cy="19" r="1.3"/>
          <circle cx="18" cy="19" r="1.3"/>
        </svg>
        <span class="cart-count" id="cartCount">0</span>
      </button>
      <button class="icon-btn menu-toggle" onclick="toggleMenu()" aria-label="منو">☰</button>
    </div>
  </div>
</header>

<main>
<section class="hero" id="home">
  <div class="container">
    <div class="hero-content">
      <span class="eyebrow">B.H TEXTILE COLLECTION</span>
      <h1>زیبایی در تار و پود <span>انتخاب شما</span></h1>
      <p>
        دنیایی از رنگ، لطافت و طرح‌های چشم‌نواز.
        مجموعه‌ای از پارچه‌های لباس برای سلیقه‌های خاص؛
        از مخمل‌های لوکس تا ساتن‌های درخشان.
      </p>
      <div class="hero-actions">
        <a href="#categories" class="btn btn-primary">مشاهده محصولات ←</a>
        <a href="#about" class="btn btn-outline">درباره فروشگاه</a>
      </div>
      <div class="hero-note">
        <div><strong>۸+</strong> دسته‌بندی پارچه</div>
        <div><strong>۳۰+</strong> مدل متنوع نمونه</div>
        <div><strong>۱۰۰٪</strong> انتخاب با سلیقه شما</div>
      </div>
    </div>
  </div>
</section>

<div class="benefit-strip">
  <div class="container benefits">
    <div class="benefit"><div class="benefit-icon">✦</div><div><strong>تنوع محصولات</strong><small>مدل‌های متنوع پارچه</small></div></div>
    <div class="benefit"><div class="benefit-icon">◇</div><div><strong>رنگ‌بندی جذاب</strong><small>انتخاب رنگ دلخواه</small></div></div>
    <div class="benefit"><div class="benefit-icon">▤</div><div><strong>قیمت شفاف</strong><small>نمایش قیمت هر متر</small></div></div>
    <div class="benefit"><div class="benefit-icon">♡</div><div><strong>انتخاب آسان</strong><small>مشاهده جزئیات محصولات</small></div></div>
  </div>
</div>

<section class="section" id="categories">
  <div class="container">
    <div class="section-heading">
      <span class="eyebrow">EXPLORE OUR COLLECTION</span>
      <h2>دسته‌بندی پارچه‌ها</h2>
      <p>دسته موردنظرت را انتخاب کن و مدل‌ها، رنگ‌ها و قیمت‌ها را ببین.</p>
    </div>
    <div class="categories-grid" id="categoryGrid"></div>
  </div>
</section>

<section class="section" id="catalog">
  <div class="container">
    <div class="catalog-top">
      <div>
        <button class="btn btn-outline" onclick="backToCategories()">← بازگشت به دسته‌بندی‌ها</button>
        <h2 id="catalogTitle">محصولات</h2>
        <p id="catalogDesc"></p>
      </div>
      <div class="catalog-tools">
        <div class="search-box">
          <span>⌕</span>
          <input type="search" id="searchInput" placeholder="جستجوی نام یا رنگ..." oninput="renderProducts()">
        </div>
        <select class="sort-select" id="sortSelect" onchange="renderProducts()">
          <option value="default">مرتب‌سازی</option>
          <option value="low">ارزان‌ترین</option>
          <option value="high">گران‌ترین</option>
          <option value="name">نام محصول</option>
        </select>
      </div>
    </div>
    <div class="filters" id="filters"></div>
    <div class="products-grid" id="productGrid"></div>
  </div>
</section>

<section class="section about-section" id="about">
  <div class="container about-grid">
    <div class="about-image">
      <img src="https://www.lombardiaspeciale.regione.lombardia.it/wps/wcm/connect/e4f89ea6-9f51-4a1a-9cb8-484229ca2c52/tessuti2.jpg?CACHEID=ROOTWORKSPACE-e4f89ea6-9f51-4a1a-9cb8-484229ca2c52-mW3TdAi&CONVERT_TO=url&MOD=AJPERES" alt="طاقه‌های پارچه رنگارنگ">
    </div>
    <div class="about-copy">
      <span class="eyebrow">ABOUT B.H TEXTILE</span>
      <h2>هر پارچه، شروع یک ایده زیباست</h2>
      <p>
        در B.H TEXTILE باور داریم انتخاب پارچه، اولین قدم برای خلق یک اثر زیباست.
        به همین دلیل تلاش کرده‌ایم مجموعه‌ای متنوع از پارچه‌های لباس را در یک فضای
        ساده و جذاب گردآوری کنیم.
      </p>
      <p>
        از پارچه‌های لطیف و ظریف تا بافت‌های خاص و طرح‌های چشم‌نواز،
        اینجا می‌توانی مدل‌های مختلف را بررسی کنی و انتخابت را با دقت انجام دهی.
      </p>
      <div class="about-points">
        <div class="about-point"><b>✦</b> تنوع طرح و رنگ</div>
        <div class="about-point"><b>✦</b> دسته‌بندی منظم</div>
        <div class="about-point"><b>✦</b> نمایش مشخصات محصول</div>
        <div class="about-point"><b>✦</b> تجربه خرید آسان</div>
      </div>
      <a href="#categories" class="btn btn-dark">دیدن مجموعه پارچه‌ها</a>
    </div>
  </div>
</section>

<section class="section">
  <div class="container">
    <div class="featured-banner">
      <div>
        <span class="eyebrow">FIND YOUR STYLE</span>
        <h2>پارچه مناسب ایده خودت را پیدا کن</h2>
        <p>رنگ‌ها و مدل‌های مختلف را ببین و انتخاب موردعلاقه‌ات را به سبد خرید اضافه کن.</p>
      </div>
      <a href="#categories" class="btn btn-primary">شروع جستجو ←</a>
    </div>
  </div>
</section>

<section class="section" id="reviews">
  <div class="container">
    <div class="section-heading">
      <span class="eyebrow">CUSTOMER EXPERIENCE</span>
      <h2>تجربه‌ای از انتخاب پارچه</h2>
      <p>نمونه‌ای از بخش نظرات مشتریان برای تکمیل ظاهر فروشگاه.</p>
    </div>
    <div class="reviews-grid">
      <article class="review">
        <div class="stars">★★★★★</div>
        <p>تنوع دسته‌بندی‌ها باعث می‌شود راحت‌تر بتوانم پارچه موردنظرم را پیدا کنم. طراحی سایت هم بسیار مرتب است.</p>
        <strong>مشتری فروشگاه</strong>
        <small>تجربه استفاده از فروشگاه</small>
      </article>
      <article class="review">
        <div class="stars">★★★★★</div>
        <p>نمایش رنگ‌ها و قیمت‌ها در کنار محصولات، انتخاب را ساده‌تر کرده است. فضای سایت هم بسیار زیباست.</p>
        <strong>مشتری فروشگاه</strong>
        <small>تجربه استفاده از فروشگاه</small>
      </article>
      <article class="review">
        <div class="stars">★★★★★</div>
        <p>دسته‌بندی پارچه‌ها و امکان جستجو تجربه خوبی ایجاد کرده و پیدا کردن مدل موردنظر راحت است.</p>
        <strong>مشتری فروشگاه</strong>
        <small>تجربه استفاده از فروشگاه</small>
      </article>
    </div>
  </div>
</section>

<section class="section" id="faq">
  <div class="container">
    <div class="section-heading">
      <span class="eyebrow">FAQ</span>
      <h2>سؤالات متداول</h2>
      <p>پاسخ پرسش‌های رایج درباره محصولات و سفارش‌ها</p>
    </div>
    <div class="faq-list">
      <div class="faq-item">
        <button class="faq-question" onclick="toggleFaq(this)">قیمت پارچه‌ها برای چه مقدار است؟ <span>＋</span></button>
        <div class="faq-answer">قیمت‌های نمونه این سایت بر اساس هر متر پارچه نمایش داده شده‌اند. برای خرید واقعی، قیمت‌ها را با موجودی و نرخ روز فروشگاه هماهنگ کنید.</div>
      </div>
      <div class="faq-item">
        <button class="faq-question" onclick="toggleFaq(this)">چطور رنگ موردنظر را انتخاب کنم؟ <span>＋</span></button>
        <div class="faq-answer">وارد دسته‌بندی موردنظر شوید، محصول را باز کنید و از میان رنگ‌های نمایش‌داده‌شده رنگ دلخواهتان را انتخاب کنید.</div>
      </div>
      <div class="faq-item">
        <button class="faq-question" onclick="toggleFaq(this)">چطور محصولی را به سبد خرید اضافه کنم؟ <span>＋</span></button>
        <div class="faq-answer">در صفحه جزئیات محصول، رنگ و متراژ را مشخص کنید و روی دکمه افزودن به سبد خرید بزنید.</div>
      </div>
    </div>
  </div>
</section>

<section class="section contact-section" id="contact">
  <div class="container contact-grid">
    <div>
      <span class="eyebrow">CONTACT US</span>
      <h2>با ما در ارتباط باش</h2>
      <p>برای اطلاع از موجودی، دریافت راهنمایی و ثبت سفارش می‌توانی از راه‌های ارتباطی فروشگاه استفاده کنی.</p>
      <div class="contact-details">
        <div class="contact-row"><i>☎</i><span>تلفن: 0912 000 0000</span></div>
        <div class="contact-row"><i>◎</i><span>اینستاگرام: @bh_textile</span></div>
        <div class="contact-row"><i>✉</i><span>ایمیل: info@bhtextile.com</span></div>
        <div class="contact-row"><i>⌖</i><span>آدرس: نشانی فروشگاه را اینجا وارد کنید</span></div>
      </div>
    </div>
    <form class="contact-form" onsubmit="sendContact(event)">
      <h3>ارسال پیام</h3>
      <div class="form-group">
        <label for="contactName">نام شما</label>
        <input id="contactName" required placeholder="نام و نام خانوادگی">
      </div>
      <div class="form-group">
        <label for="contactPhone">شماره تماس</label>
        <input id="contactPhone" required type="tel" placeholder="شماره تماس">
      </div>
      <div class="form-group">
        <label for="contactMessage">پیام شما</label>
        <textarea id="contactMessage" required placeholder="متن پیام خود را بنویسید..."></textarea>
      </div>
      <button class="btn btn-primary" type="submit">ثبت پیام ←</button>
      <p style="font-size:10px;color:#aaa;margin-bottom:0">این فرم در نسخه نمایشی پیام را به سرور ارسال نمی‌کند.</p>
    </form>
  </div>
</section>
</main>

<footer>
  <div class="container">
    <div class="footer-grid">
      <div class="footer-brand">
        <div class="logo">
          <div class="logo-mark" style="color:var(--gold-light)">B.H</div>
          <div class="logo-text" style="color:white">B.H <span>TEXTILE</span><small>FABRIC COLLECTION</small></div>
        </div>
        <p>دنیایی از رنگ، لطافت و طرح‌های متنوع؛ همراه شما در انتخاب پارچه مناسب برای ایده‌های زیبا.</p>
      </div>
      <div>
        <h4>دسترسی سریع</h4>
        <ul>
          <li><a href="#home">صفحه اصلی</a></li>
          <li><a href="#categories">محصولات</a></li>
          <li><a href="#about">درباره ما</a></li>
          <li><a href="#contact">تماس با ما</a></li>
        </ul>
      </div>
      <div>
        <h4>دسته‌بندی‌ها</h4>
        <ul>
          <li><a href="#categories">مخمل</a></li>
          <li><a href="#categories">ساتن</a></li>
          <li><a href="#categories">ابریشم</a></li>
          <li><a href="#categories">پارچه‌های طرح‌دار</a></li>
        </ul>
      </div>
      <div>
        <h4>ارتباط با ما</h4>
        <ul>
          <li>تلفن: 0912 000 0000</li>
          <li>اینستاگرام: @bh_textile</li>
          <li>ایمیل: info@bhtextile.com</li>
        </ul>
      </div>
    </div>
    <div class="footer-bottom">© 2026 B.H TEXTILE — تمامی حقوق محفوظ است.</div>
  </div>
</footer>

<!-- سبد خرید -->
<div class="overlay" id="overlay" onclick="closeCart()"></div>
<aside class="cart-drawer" id="cartDrawer">
  <div class="drawer-head">
    <h3>سبد خرید شما</h3>
    <button class="close-btn" onclick="closeCart()">×</button>
  </div>
  <div class="cart-items" id="cartItems"></div>
  <div class="drawer-footer" id="cartFooter"></div>
</aside>

<!-- جزئیات محصول -->
<div class="modal" id="productModal" onclick="if(event.target===this)closeModal()">
  <div class="modal-box">
    <button class="close-btn modal-close" onclick="closeModal()">×</button>
    <img class="modal-image" id="modalImage" src="" alt="تصویر پارچه">
    <div class="modal-content">
      <span class="eyebrow">B.H TEXTILE PRODUCT</span>
      <h2 id="modalName"></h2>
      <p id="modalDescription"></p>
      <div class="color-title">رنگ موردنظر را انتخاب کن:</div>
      <div class="modal-colors" id="modalColors"></div>
      <div class="meter-input">
        <label for="meterCount">متراژ:</label>
        <input id="meterCount" type="number" min="1" max="1000" value="1">
        <span>متر</span>
      </div>
      <div class="modal-price" id="modalPrice"></div>
      <button class="btn btn-primary" style="width:100%" onclick="addToCart()">افزودن به سبد خرید</button>
    </div>
  </div>
</div>

<div class="toast" id="toast"></div>
<button class="back-top" id="backTop" onclick="window.scrollTo({top:0,behavior:'smooth'})">↑</button>

<script>
const photos={
  rolls:"https://www.gebrueder-berger.de/upload/large/large_6407568f3941feb03f253587_7c57196b42ff32e7983ce88a978c8dc3bc249932f9aaf293085dbf63b8337c41_6407588a.jpg",
  patterns:"https://www.lombardiaspeciale.regione.lombardia.it/wps/wcm/connect/e4f89ea6-9f51-4a1a-9cb8-484229ca2c52/tessuti2.jpg?CACHEID=ROOTWORKSPACE-e4f89ea6-9f51-4a1a-9cb8-484229ca2c52-mW3TdAi&CONVERT_TO=url&MOD=AJPERES",
  colorful:"https://static.fibre2fashion.com/Newsresource/images/300/adobestock-966217736_311835.jpeg",
  bolts:"https://static.fibre2fashion.com/Newsresource/images/297/adobestock-932415118_309502.jpg"
};

const categories=[
{
 id:"velvet",name:"مخمل",english:"VELVET",photo:photos.rolls,
 desc:"مجموعه پارچه‌های مخمل با بافت‌های متنوع و رنگ‌های جذاب",
 products:[
  {name:"مخمل ساده",price:480000,type:"ساده",colors:[["زرشکی","#721d35"],["سبز یشمی","#174b3c"],["سرمه‌ای","#172b50"],["کرم","#d9c6a4"]],image:photos.rolls,description:"پارچه مخمل ساده با ظاهر لطیف و مناسب طراحی لباس‌های متنوع."},
  {name:"مخمل کبریتی",price:520000,type:"بافت‌دار",colors:[["قهوه‌ای","#694b38"],["طوسی","#888888"],["سبز زیتونی","#697044"]],image:photos.colorful,description:"نمونه پارچه مخمل با بافت برجسته و ظاهر متفاوت."},
  {name:"مخمل طرح‌دار",price:590000,type:"طرح‌دار",colors:[["طلایی","#b99a5b"],["آبی","#385a7c"],["کرم","#d9c8a8"]],image:photos.patterns,description:"پارچه طرح‌دار برای طراحی‌های خاص و متفاوت."},
  {name:"مخمل شانل",price:630000,type:"شانل",colors:[["نسکافه‌ای","#98775c"],["سبز","#3e5b49"],["آبی نفتی","#24465a"]],image:photos.rolls,description:"پارچه با بافت خاص و جلوه‌ای شیک."},
  {name:"مخمل لطیف",price:550000,type:"ساده",colors:[["صورتی","#d69ba8"],["بنفش","#775b8a"],["طوسی","#969696"]],image:photos.bolts,description:"نمونه مخمل ساده در طیف رنگ‌های متنوع."},
  {name:"مخمل رنگی",price:680000,type:"بافت‌دار",colors:[["شتری","#ae8961"],["ذغالی","#414141"],["سبز تیره","#29483a"]],image:photos.colorful,description:"مجموعه رنگی پارچه‌های مخمل."}
 ]},
{
 id:"satin",name:"ساتن",english:"SATIN",photo:photos.colorful,
 desc:"مجموعه ساتن‌های براق، مات و طرح‌دار",
 products:[
  {name:"ساتن آمریکایی",price:390000,type:"ساده",colors:[["سفید","#eee9df"],["مشکی","#202020"],["قرمز","#9d2738"],["صورتی","#dba4ad"]],image:photos.colorful,description:"ساتن با جلوه درخشان و رنگ‌بندی متنوع."},
  {name:"ساتن ابریشمی",price:650000,type:"براق",colors:[["شامپاینی","#e5d2ae"],["طلایی","#c3a15e"],["یاسی","#b9a1c8"]],image:photos.rolls,description:"پارچه ساتن با ظاهر لطیف و درخشان."},
  {name:"ساتن طرح‌دار",price:470000,type:"طرح‌دار",colors:[["آبی","#426a92"],["کرم","#d8c5a5"],["زرشکی","#76283d"]],image:photos.patterns,description:"ساتن طرح‌دار در ترکیب رنگ‌های جذاب."},
  {name:"ساتن مات",price:420000,type:"مات",colors:[["سبز","#526b56"],["طوسی","#929292"],["نسکافه‌ای","#a17d60"]],image:photos.bolts,description:"ساتن با جلوه مات و رنگ‌های کاربردی."},
  {name:"ساتن رنگی",price:510000,type:"براق",colors:[["صورتی","#d69ba8"],["آبی","#385a7c"],["سبز","#3e5b49"]],image:photos.colorful,description:"مجموعه ساتن رنگی برای انتخاب‌های متنوع."}
 ]},
{
 id:"silk",name:"ابریشم",english:"SILK",photo:photos.bolts,
 desc:"پارچه‌های ابریشمی و لطیف",
 products:[
  {name:"ابریشم ساده",price:1250000,type:"ساده",colors:[["سفید","#eee8db"],["طلایی","#c8a96b"],["صورتی","#d9a4ad"]],image:photos.bolts,description:"پارچه ابریشمی ساده با جلوه‌ای ظریف."},
  {name:"ابریشم طرح‌دار",price:1450000,type:"طرح‌دار",colors:[["آبی","#476b91"],["قرمز","#9b2638"],["سبز","#46664d"]],image:photos.patterns,description:"پارچه ابریشم طرح‌دار با رنگ‌های متنوع."},
  {name:"ابریشم لطیف",price:980000,type:"لطیف",colors:[["یاسی","#bba7d0"],["کرم","#e1d4b9"],["آبی روشن","#a9c7d7"]],image:photos.rolls,description:"نمونه پارچه لطیف در رنگ‌های ملایم."}
 ]},
{
 id:"cotton",name:"نخی",english:"COTTON",photo:photos.patterns,
 desc:"پارچه‌های نخی ساده و طرح‌دار",
 products:[
  {name:"نخی ساده",price:260000,type:"ساده",colors:[["سفید","#eee9df"],["آبی","#9abbd1"],["صورتی","#dca9b4"],["سبز","#9bae8b"]],image:photos.rolls,description:"پارچه نخی ساده در رنگ‌های متنوع."},
  {name:"نخی گلدار",price:310000,type:"گل‌دار",colors:[["صورتی","#dba7ad"],["آبی","#8caabd"],["کرم","#d7c4a3"]],image:photos.patterns,description:"پارچه نخی با طرح‌های گل‌دار."},
  {name:"نخی چهارخانه",price:290000,type:"چهارخانه",colors:[["قرمز","#a94c4c"],["آبی","#536f91"],["قهوه‌ای","#8c725b"]],image:photos.bolts,description:"پارچه چهارخانه در رنگ‌بندی متنوع."}
 ]},
{
 id:"linen",name:"لینن",english:"LINEN",photo:photos.colorful,
 desc:"پارچه‌های لینن با رنگ‌های طبیعی",
 products:[
  {name:"لینن ساده",price:360000,type:"ساده",colors:[["شیری","#e8dfcc"],["کرم","#d5c4a5"],["طوسی","#999999"],["زیتونی","#777d5a"]],image:photos.colorful,description:"پارچه لینن ساده در رنگ‌های طبیعی."},
  {name:"لینن راه‌راه",price:390000,type:"راه‌راه",colors:[["آبی","#8ba4b0"],["قهوه‌ای","#9a806b"]],image:photos.patterns,description:"پارچه لینن راه‌راه با ظاهر خاص."}
 ]},
{
 id:"chiffon",name:"حریر",english:"CHIFFON",photo:photos.bolts,
 desc:"حریرهای ساده و طرح‌دار",
 products:[
  {name:"حریر ساده",price:280000,type:"ساده",colors:[["سفید","#eee9df"],["مشکی","#222222"],["یاسی","#b8a5c9"],["صورتی","#dba8b4"]],image:photos.rolls,description:"حریر ساده با رنگ‌های متنوع."},
  {name:"حریر گلدار",price:340000,type:"گل‌دار",colors:[["صورتی","#d9a3ab"],["آبی","#91adbf"]],image:photos.patterns,description:"پارچه حریر طرح‌دار و گل‌دار."}
 ]},
{
 id:"crepe",name:"کرپ",english:"CREPE",photo:photos.rolls,
 desc:"پارچه‌های کرپ مناسب طراحی لباس",
 products:[
  {name:"کرپ مازراتی",price:440000,type:"ساده",colors:[["مشکی","#222222"],["کرم","#d9c8a8"],["سبز","#3e5b49"],["سرمه‌ای","#172b50"]],image:photos.rolls,description:"کرپ با رنگ‌بندی متنوع برای دوخت لباس."},
  {name:"کرپ حریر",price:390000,type:"لطیف",colors:[["صورتی","#dba4ad"],["یاسی","#b9a1c8"],["سفید","#eee9df"]],image:photos.colorful,description:"نمونه کرپ لطیف در رنگ‌های روشن."}
 ]},
{
 id:"printed",name:"پارچه طرحدار",english:"PRINTED FABRIC",photo:photos.patterns,
 desc:"پارچه‌های طرح‌دار، چاپی و رنگی",
 products:[
  {name:"پارچه گل‌دار",price:350000,type:"گل‌دار",colors:[["قرمز","#a94c4c"],["آبی","#536f91"],["صورتی","#dba7ad"]],image:photos.patterns,description:"پارچه گل‌دار با طرح و رنگ متنوع."},
  {name:"پارچه هندسی",price:370000,type:"هندسی",colors:[["طلایی","#b48c53"],["آبی","#536f91"],["سبز","#3e5b49"]],image:photos.bolts,description:"پارچه طرح هندسی با ترکیب رنگ‌های جذاب."},
  {name:"پارچه چاپی",price:390000,type:"چاپی",colors:[["قرمز","#a94c4c"],["طلایی","#b48c53"],["کرم","#d9c8a8"]],image:photos.colorful,description:"پارچه چاپی در رنگ‌های متنوع."}
 ]}
];

let currentCategory=null;
let currentProduct=null;
let selectedColor=null;
let cart=[];
let favorites=new Set();
let activeFilter="همه";

const money=n=>Number(n).toLocaleString("en-US")+" تومان";
const $=id=>document.getElementById(id);

function renderCategories(){
 $("categoryGrid").innerHTML=categories.map(c=>`
  <article class="category-card" onclick="openCategory('${c.id}')">
   <img src="${c.photo}" alt="طاقه پارچه ${c.name}" loading="lazy">
   <div class="category-info">
    <small>${c.english}</small>
    <h3>پارچه ${c.name}</h3>
    <span>${c.products.length} مدل نمونه برای مشاهده ←</span>
   </div>
  </article>
 `).join("");
}

function openCategory(id){
 currentCategory=categories.find(c=>c.id===id);
 activeFilter="همه";
 $("catalogTitle").textContent="پارچه "+currentCategory.name;
 $("catalogDesc").textContent=currentCategory.desc;
 $("searchInput").value="";
 $("sortSelect").value="default";
 $("filters").innerHTML=["همه",...new Set(currentCategory.products.map(p=>p.type))].map(f=>`
  <button class="filter ${f==="همه"?"active":""}" onclick="setFilter('${f}',this)">${f}</button>
 `).join("");
 $("catalog").style.display="block";
 renderProducts();
 $("catalog").scrollIntoView({behavior:"smooth"});
 $("mainNav").classList.remove("open");
}

function setFilter(filter,button){
 activeFilter=filter;
 document.querySelectorAll(".filter").forEach(b=>b.classList.remove("active"));
 button.classList.add("active");
 renderProducts();
}

function renderProducts(){
 if(!currentCategory)return;
 const search=$("searchInput").value.trim().toLowerCase();
 let list=currentCategory.products.filter(p=>
  (activeFilter==="همه"||p.type===activeFilter)&&
  (p.name+" "+p.type+" "+p.colors.map(c=>c[0]).join(" ")).toLowerCase().includes(search)
 );
 const sort=$("sortSelect").value;
 if(sort==="low")list.sort((a,b)=>a.price-b.price);
 if(sort==="high")list.sort((a,b)=>b.price-a.price);
 if(sort==="name")list.sort((a,b)=>a.name.localeCompare(b.name,"fa"));

 $("productGrid").innerHTML=list.length?list.map(p=>{
  const index=currentCategory.products.indexOf(p);
  const favoriteKey=currentCategory.id+"-"+p.name;
  return `
   <article class="product-card">
    <div class="product-image">
     <img src="${p.image}" alt="نمونه طاقه پارچه ${p.name}" loading="lazy">
     <span class="product-tag">${p.type}</span>
     <button class="favorite ${favorites.has(favoriteKey)?"active":""}" onclick="toggleFavorite('${favoriteKey}',this)" aria-label="علاقه‌مندی">♡</button>
    </div>
    <div class="product-info">
     <h3>${p.name}</h3>
     <div class="product-subtitle">دسته‌بندی: ${currentCategory.name}</div>
     <div class="color-title">رنگ‌های قابل انتخاب:</div>
     <div class="swatches">
      ${p.colors.map((c,i)=>`<button class="swatch ${i===0?"selected":""}" title="${c[0]}" aria-label="${c[0]}" style="background:${c[1]}" onclick="selectCardColor(this)"></button>`).join("")}
     </div>
     <div class="product-bottom">
      <div class="price">${money(p.price)} <small>/ متر</small></div>
      <button class="btn btn-dark" onclick="showProduct(${index})">مشاهده جزئیات</button>
     </div>
    </div>
   </article>
  `;
 }).join(""):'<div class="empty-state">محصولی با این مشخصات پیدا نشد.</div>';
}

function selectCardColor(button){
 button.parentElement.querySelectorAll(".swatch").forEach(x=>x.classList.remove("selected"));
 button.classList.add("selected");
}

function toggleFavorite(key,button){
 if(favorites.has(key)){
  favorites.delete(key);
  button.classList.remove("active");
  showToast("از علاقه‌مندی‌ها حذف شد");
 }else{
  favorites.add(key);
  button.classList.add("active");
  showToast("به علاقه‌مندی‌ها اضافه شد");
 }
}

function showProduct(index){
 currentProduct=currentCategory.products[index];
 selectedColor=currentProduct.colors[0][0];
 $("modalImage").src=currentProduct.image;
 $("modalName").textContent=currentProduct.name;
 $("modalDescription").textContent=currentProduct.description+" دسته‌بندی: "+currentCategory.name+" | نوع: "+currentProduct.type;
 $("modalColors").innerHTML=currentProduct.colors.map((c,i)=>`
  <button class="modal-color ${i===0?"selected":""}" onclick="selectModalColor('${c[0]}',this)">
   <span style="display:inline-block;width:10px;height:10px;border-radius:50%;background:${c[1]};margin-left:5px"></span>${c[0]}
  </button>
 `).join("");
 $("meterCount").value=1;
 updateModalPrice();
 $("productModal").classList.add("show");
 document.body.style.overflow="hidden";
}

function selectModalColor(color,button){
 selectedColor=color;
 document.querySelectorAll(".modal-color").forEach(x=>x.classList.remove("selected"));
 button.classList.add("selected");
}

function updateModalPrice(){
 if(!currentProduct)return;
 const qty=Math.max(1,Math.min(1000,Number($("meterCount").value)||1));
 $("modalPrice").innerHTML=money(currentProduct.price*qty)+" <small>برای "+qty+" متر</small>";
}
$("meterCount").addEventListener("input",updateModalPrice);

function closeModal(){
 $("productModal").classList.remove("show");
 document.body.style.overflow="";
}

function addToCart(){
 if(!currentProduct)return;
 const quantity=Math.max(1,Math.min(1000,Number($("meterCount").value)||1));
 const key=currentCategory.id+"-"+currentProduct.name+"-"+selectedColor;
 const existing=cart.find(x=>x.key===key);
 if(existing)existing.quantity+=quantity;
 else cart.push({
  key,
  name:currentProduct.name,
  category:currentCategory.name,
  color:selectedColor,
  price:currentProduct.price,
  quantity,
  image:currentProduct.image
 });
 updateCart();
 closeModal();
 showToast("محصول با موفقیت به سبد خرید اضافه شد");
}

function updateCart(){
 $("cartCount").textContent=cart.reduce((sum,item)=>sum+item.quantity,0);
 renderCart();
}

function renderCart(){
 if(!cart.length){
  $("cartItems").innerHTML='<div class="cart-empty"><div>♧</div>سبد خرید شما خالی است.<br>از میان محصولات، پارچه موردنظرت را انتخاب کن.</div>';
  $("cartFooter").innerHTML='<div class="total-line"><span>جمع کل</span><span>۰ تومان</span></div><button class="btn btn-dark" onclick="closeCart()">ادامه مشاهده محصولات</button>';
  return;
 }
 $("cartItems").innerHTML=cart.map((item,index)=>`
  <div class="cart-item">
   <img src="${item.image}" alt="${item.name}">
   <div>
    <h4>${item.name}</h4>
    <p>${item.category} | رنگ: ${item.color}</p>
    <strong>${money(item.price*item.quantity)}</strong>
    <div class="quantity-control">
     <button onclick="changeQuantity(${index},-1)">−</button>
     <span>${item.quantity} متر</span>
     <button onclick="changeQuantity(${index},1)">+</button>
    </div>
   </div>
   <button class="remove-item" onclick="removeCartItem(${index})" aria-label="حذف">×</button>
  </div>
 `).join("");
 const total=cart.reduce((sum,item)=>sum+item.price*item.quantity,0);
 $("cartFooter").innerHTML=`
  <div class="total-line"><span>جمع کل</span><span>${money(total)}</span></div>
  <button class="btn btn-primary" onclick="checkout()">ادامه و ثبت سفارش ←</button>
 `;
}

function changeQuantity(index,amount){
 cart[index].quantity+=amount;
 if(cart[index].quantity<1)cart.splice(index,1);
 updateCart();
}

function removeCartItem(index){
 cart.splice(index,1);
 updateCart();
 showToast("محصول از سبد خرید حذف شد");
}

function openCart(){
 renderCart();
 $("overlay").classList.add("show");
 $("cartDrawer").classList.add("show");
 document.body.style.overflow="hidden";
}

function closeCart(){
 $("overlay").classList.remove("show");
 $("cartDrawer").classList.remove("show");
 document.body.style.overflow="";
}

function checkout(){
 if(!cart.length)return;
 const total=cart.reduce((sum,item)=>sum+item.price*item.quantity,0);
 showToast("سبد خرید آماده ثبت سفارش است؛ اتصال درگاه در نسخه واقعی لازم است.");
}

function backToCategories(){
 $("catalog").style.display="none";
 $("categories").scrollIntoView({behavior:"smooth"});
}

function toggleFaq(button){
 button.parentElement.classList.toggle("open");
}

function toggleMenu(){
 $("mainNav").classList.toggle("open");
}

function showToast(message){
 const toast=$("toast");
 toast.textContent=message;
 toast.classList.add("show");
 clearTimeout(window.toastTimer);
 window.toastTimer=setTimeout(()=>toast.classList.remove("show"),2800);
}

function sendContact(event){
 event.preventDefault();
 showToast("پیام شما در نسخه نمایشی ثبت شد.");
 event.target.reset();
}

window.addEventListener("scroll",()=>{
 $("backTop").classList.toggle("show",window.scrollY>500);
});

document.addEventListener("keydown",event=>{
 if(event.key==="Escape"){
  closeModal();
  closeCart();
  $("mainNav").classList.remove("open");
 }
});

renderCategories();
updateCart();
</script>
</body>
</html>
