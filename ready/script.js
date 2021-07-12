 var modal = document.getElementById("my_modal");
 var btn = document.getElementById("form");
 var span = document.getElementsByClassName("popup-close")[0];

 modal.onclick = function () {
    modal.style.display = "block";
 }

 btn.onclick = function () {
    modal.style.display = "none";
 }

 span.onclick = function (event) {
    if (event.target == modal) {
        modal.style.display = "none";
    }
}
