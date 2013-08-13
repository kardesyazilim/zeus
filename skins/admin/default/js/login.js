$(document).ready(function() {
            $("input, textarea, select").not('.nostyle').uniform();
            $("#loginForm").validate({
                rules: {
                    username: {
                        required: true,
                        minlength: 4
                    },
                    password: {
                        required: true,
                        minlength: 6
                    }  
                },
                messages: {
                    username: {
                        required: "Lütfen Kullanıcı Adınızı Giriniz",
                        minlength: "! Minimum 4 karakterli olmak zorunda"
                    },
                    password: {
                        required: "Lütfen Şifrenizi Giriniz",
                        minlength: "! Minimum 6 karakterli olmak zorunda"
                    }
                }   
            });
        });

