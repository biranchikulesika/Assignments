// script.js

$(document).ready(function () {

	$.ajax({

		url: "a3f4_resume.json",

		success: function (data) {

			$("#objective").text(data.objective);

			// Education

			let edu = "";

			data.education.forEach(function (item) {

				edu += `<tr>

                <td>${item.degree}</td>

                <td>${item.institution}</td>

                <td>${item.year}</td>

                <td>${item.score}</td>

                </tr>`;
			});

			$("#eduTable").append(edu);

			// Skills

			let skill = "";

			for (let key in data.skills) {

				skill += `<h3>${key}</h3><ul>`;

				data.skills[key].forEach(function (item) {

					skill += `<li>${item}</li>`;
				});

				skill += `</ul>`;
			}

			$("#skills").html(skill);

			// Projects

			let project = "";

			data.projects.forEach(function (item) {

				project += `<div class="project">

                <h3>${item.title}</h3>

                <p>${item.description}</p>

                <p><b>Tech:</b> ${item.technologies}</p>

                </div>`;
			});

			$("#projects").html(project);

		},

		error: function () {

			alert("Data not loaded");
		}

	});

});