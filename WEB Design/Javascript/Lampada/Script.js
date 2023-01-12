//function lampada_magica();
//{
    //var imagem = document.getElementById('Lampada');
    //if (imagem.src.match("luzligada.gif"))
    //{
    //    imagem.src = "/WEB Design/Images/luzDesligada.gif";
    //}
    //else
    //{
    //    imagem.src = "/WEB Design/Images/luzligada.gif";
  //  }
//}

function Ligar();
{
    //document.querySelector("img")
    document.getElementById("Lampada").src="/WEB Design/Images/luzLigada.gif"
    //var imagem= document.getElementById("Lampada");
    //imagem.src= "luzLigada.gif"

}

function Desligar();
{
    
    document.getElementById("Lampada").src="luzDesligada.gif"

}

function Mostrar();
{
    
    document.getElementById("Lampada").addEventListener("click", function()
    {
        var i= document.getElementById("Lampada");
        i.style.display="block"
    })

}

function Ocultar();
{
    
    document.getElementById("Lampada").addEventListener("click", function()
    {
        var i= document.getElementById("Lampada");
        i.style.display = "none"
    })

}

function Piscar();
{
    
    setInterval(Desligar, 75)
    setInterval(Ligar, 75)

}

function Ligar();
{
    
    document.getElementById("Lampada").src="luzLigada.gif"

}

