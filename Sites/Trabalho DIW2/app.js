const TMDB_ENDPOINT = 'https://api.themoviedb.org/3';
const APIKEY = '77c11f6d19525181ae8de83328e720c0';
const IMG_PREFIX = 'https://image.tmdb.org/t/p/w500';
const LINK_LINK = 'https://www.themoviedb.org/movie/'
let xhr;

function carregaFilmes () {
    xhr = new XMLHttpRequest ();

    xhr.open ('GET', TMDB_ENDPOINT + '/movie/popular' + '?api_key=' + APIKEY, true);
    xhr.onload = exibeFilmes;
    xhr.send();
}

function pesquisaFilmes () {
    xhr = new XMLHttpRequest ();

    query = document.getElementById('pesquisa').value;

    xhr.open ('GET', TMDB_ENDPOINT + '/search/movie' + '?api_key=' + APIKEY + '&query=' + query, true);
    xhr.onload = exibeFilmes;
    xhr.send();
}


function exibeFilmes () {
    
    let data = JSON.parse (xhr.responseText);
    let textoHTML = '';

    for (let i = 0; i < data.results.length; i++){
        let nomeFilme = data.results[i].title;
        let sinopse = data.results[i].overview;
        let imagem = IMG_PREFIX + data.results[i].poster_path;
        let linkSite = LINK_LINK + '/' + data.results[i].id;

        textoHTML += `<div class="card col-sm-6 col-md-4 col-lg-4">
            <img src="${imagem}" class="card-img-top" alt="...">
            <div class="card-body">
                <h5 class="card-title">${nomeFilme}</h5>
                <p class="card-text">${sinopse}</p>
                <a href="${linkSite}" class="btn btn-primary" target="_blank">More</a>
            </div>
        </div>`
    }

    document.getElementById('tela').innerHTML = textoHTML;
}